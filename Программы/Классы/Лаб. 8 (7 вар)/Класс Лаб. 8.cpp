#include <iostream>

using namespace std;

const int evNothing = 0;
const int evMessage = 100;
const int cmAdd = 1;
const int cmDel = 2;
const int cmShow = 3;
const int cmGet = 4;
const int cmMake = 5;
const int cmQuit = 101;

struct TEvent {
    int what;
    union 
    {
        int command;
        struct 
        {
            int message;
            int a;
        };
    };
};

class Object
{
public:
    Object(void);
    virtual void Show() = 0;
    virtual void Input() = 0;
    virtual ~Object(void);
};

Object::Object(void) = default;

Object::~Object(void) = default;

class Person : public Object
{
protected:
    string name;
    int age;
public:
    Person(void);
public:
    virtual ~Person(void);
    void Show() override;
    void Input() override;

    Person(string, int);
    Person(const Person&);

    string getName() { return name; }
    int getAge() { return age; }

    void setName(string newName) { name = newName; }
    void setAge(int newAge) { age = newAge; }

    Person& operator=(const Person&);
};

Person::Person(void)
{
    name = "";
    age = 0;
}

Person::~Person(void) = default;

Person::Person(string newName, int newAge)
{
    name = newName;
    age = newAge;
}

Person::Person(const Person & p)
{
    name = p.name;
    age = p.age;
}

Person& Person::operator=(const Person & p)
{
    if (&p == this) return *this;
    name = p.name;
    age = p.age;
    return *this;
}

void Person::Show()
{
    cout << "Person's Name: " << name << endl;
    cout << "Person's Age: " << age << endl;
    cout << endl;
}

void Person::Input()
{
    cout << "Person's Name? "; cin >> name;
    cout << "\nPerson's Age? "; cin >> age;
}

class Employee : public Person
{
protected:
    float salary;
    string position;
public:
    Employee(void);

public:
    ~Employee(void) override;
    void Show() override;
    void Input() override;

    Employee(string, int, float, string);
    Employee(const Employee&);

    float getSalary() { return salary; }
    string getPosition() { return position; }

    void setSalary(float newSalary) { salary = newSalary; }
    void setPosition(string newPosition) { position = newPosition; }

    Employee& operator=(const Employee&);
};

Employee::Employee(void) : Person()
{
    salary = 0.0;
    position = "";
}

Employee::~Employee(void) { }

Employee::Employee(string newName, int newAge, float newSalary, string newPosition) : Person(newName, newAge) {
    salary = newSalary;
    position = newPosition;
}

Employee::Employee(const Employee& e) {
    name = e.name;
    age = e.age;
    salary = e.salary;
    position = e.position;
}

Employee& Employee::operator=(const Employee& e)
{
    if (&e == this) return *this;
    name = e.name;
    age = e.age;
    salary = e.salary;
    position = e.position;
    return *this;
}

void Employee::Show()
{
    cout << "Employee's Name: " << name << endl;
    cout << "Employee's Age: " << age << endl;
    cout << "Employee's Salary: " << salary << endl;
    cout << "Employee's Position: " << position << endl;
    cout << endl;
}

void Employee::Input()
{
    cout << "Employee's Name? "; cin >> name;
    cout << "\nEmployee's Age? "; cin >> age;
    cout << "\nEmployee's Salary? "; cin >> salary;
    cout << "\nEmployee's Position? "; cin >> position;
}

class Vector
{
public:
    Vector(void);
    Vector(int);
public:
    ~Vector(void);
    int Add();
    int Del();
    void Show();
    int operator()();
protected:
    Object** beg;
    int size;
    int cur;
};

Vector::Vector(void)
{
    beg = 0;
    size = 0;
    cur = 0;
}
Vector::Vector(int n)
{
    beg = new Object * [n];
    cur = 0;
    size = n;
}

Vector::~Vector(void)
{
    if (beg != 0)delete[] beg;
    beg = 0;
}

 int Vector::Add()
{
    Object* p;
    cout << "1.Person" << endl;
    cout << "2.Employee" << endl;
    int y;
    cin >> y;
    if (y == 1)
    {
        Person* a = new (Person);
        a->Input();
        p = a;
        if (cur < size)
        {
            beg[cur] = p;
            cur++;
        }
    }
    else
        if (y == 2)
        {
            Employee* b = new Employee;
            b->Input();
            p = b;
            if (cur < size)
            {
                beg[cur] = p;
                cur++;
            }
        }
        else return;
}

void Vector::Show()
{
    if (cur == 0) cout << "Empty" << endl;
    Object** p = beg;
    for (int i = 0; i < cur; i++)
    {
        (*p)->Show();
        p++;
    }
}

int Vector::operator ()()
{
    return cur;
}

int Vector::Del()
{
    if (cur == 0)return;
    cur--;
}

class Dialog : public Vector {
public:
    Dialog(void);

public:
    virtual ~Dialog();

    virtual void GetEvent(TEvent& event);

    virtual int execute();

    virtual void HandleEvent(TEvent& event);

    virtual void ClearEvent(TEvent& event);

    int valid();

    void EndExec();

protected:
    int EndState;
};

Dialog::Dialog(void) : Vector() 
{
    EndState = 0;
}

Dialog::~Dialog() {}

void Dialog::GetEvent(TEvent& event) {
    string OpInt = "+-mszq";
    string s;
    string param;
    char code;
    cout << '>';
    cin >> s;
    code = s[0];
    if (OpInt.find(code) >= 0) {
        event.what = evMessage;
        switch (code) {
        case 'm':
            event.command = cmMake;
            break;
        case '+':
            event.command = cmAdd;
            break;
        case '-':
            event.command = cmDel;
            break;
        case 's':
            event.command = cmShow;
            break;
        case 'z':
            event.command = cmGet;
            break;
        case 'q':
            event.command = cmQuit;
            break;
        }
        if (s.length() > 1) {
            param = s.substr(1, s.length() - 1);
            int A = atoi(param.c_str());
            event.a = A;
        }
    }
    else {
        event.what = evNothing;
    }
}

int Dialog::execute() {
    TEvent event;
    do {
        EndState = 0;
        GetEvent(event);
        HandleEvent(event);
    } while (!valid());
    return EndState;
}

void Dialog::HandleEvent(TEvent& event) {
    if (event.what == evMessage) {
        string name;
        switch (event.command) {
        case cmMake:
            for (int i = 0; i < event.a; ++i) {
                Object* ptr;
                int input;
                cout << "What Object to create(1 - Person, 2 - Employee)? ";
                cin >> input;
                switch (input) {
                case 1:
                    ptr = new Person;
                    ptr->Input();
                    break;
                case 2:
                    ptr = new Employee;
                    ptr->Input();
                    break;
                }
                Add();
            }
            ClearEvent(event);
            break;
        case cmAdd:
            int input;
            Object* ptr;
            cout << "What Object to add(1 - Person, 2 - Employee)? ";
            cin >> input;
            switch (input) {
            case 1:
                ptr = new Person;
                ptr->Input();
                break;
            case 2:
                ptr = new Employee;
                ptr->Input();
                break;
            }
            Add();
            ClearEvent(event);
            break;
        case cmShow:
            Show();
            ClearEvent(event);
            break;
        case cmDel:
            cout << "What Person to delete(enter name)? ";
            cin >> name;
            Del();
            ClearEvent(event);
            break;
        case cmQuit:
            EndExec();
            ClearEvent(event);
            break;
        }
    }
}

void Dialog::ClearEvent(TEvent& event) {
    event.what = evNothing;
}

int Dialog::valid() {
    if (EndState == 0) 
    {
        return 0;
    }
    else 
    {
        return 1;
    }
}

void Dialog::EndExec() {
    EndState = 1;
}

int main() 
{
    Dialog d;
    d.execute();
    return 0;
}
