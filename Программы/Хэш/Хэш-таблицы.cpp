#include <iostream>
#include <string>

using namespace std;

int collis = 0;

struct human
{
	string fullname = "Null";
	string adres = "Null";
	string telephone = "Null";
};

struct hash_table
{
	human* arr;
	hash_table(int size)
	{
		arr = new human[size];
	}
	void add(human tmp, int size);
	void findIndex(string num, int size);
};

string names[100] = { "Никита", "Иван", "Пол", "Артем", "Егор", "Рома", "Дмитрий", "Максим", "Сергей", "Андрей", "Илья", "Кирилл", "Михаил", "Матвей", "Роман", "Иван", "Ильяс", "Арсенний", "Денис", "Евгений", "Даниил", "Тимофей", "Владислав", "Павел", "Марк", "Константин", "Тимур", "Олег", "Ярослав", "Антон", "Николай", "Глеб", "Данил", "Савелий", "Вадим", "Степан", "Юрий", "Богдан", "Артур", "Семен", "Макар", "Лев", "Виктор", "Елисей", "Виталий", "Вячеслав", "Захар", "Мирон", "Дамир", "Георгий", "Давид", "Платон", "Анатолий", "Григорий", "Демид", "Данила", "Станислав", "Василий", "Федор", "Родион" , "Леонид", "Одиссей", "Валерий", "Святослав", "Борис", "Эдуард", "Марат", "Герман", "Даниэль", "Петр", "Амир", "Всеволод", "Мирослав", "Гордей", "Артемий", "Эмиль", "Назар", "Савва", "Ян", "Рустам", "Ингат", "Влад", "Альберт", "Тамерлан", "Айдар", "Роберт", "Марсель", "Ильдар", "Самир", "Тихон" , "Рамиль", "Ринат", "Радмир", "Филипп", "Арсен", "Ростислав", "Святогор", "Яромир", "Алдуин", "Пастернак" };
string postname[100] = { "Ипатов", "Баратеон", "Талли", "Инь", "Грейджой", "Бронн", "Мартелл", "Атрейдес", "Харконнен", "Гильдеец", "Смирнов", "Иванов", "Кузнецов", "Соколов", "Попов", "Лебедев", "Козлов", "Новиков", "Морозов", "Петров", "Волков", "Соловьев", "Васильев", "Зайцев", "Павлов", "Семенов", "Голубев", "Виноградов", "Богданов", "Влолбев", "Федоров", "Михайлов", "Беляев", "Тарасов", "Белов", "Комаров", "Тарасов", "Белов", "Комаров", "Орлов", "Киселев", "Андреев", "Макаров", "Гладиатор", "Ильин", "Лазарев", "Медведев", "Ершов", "Никитин", "Соболев", "Рябов", "Поляков", "Цветков", "Данилов", "Жуков", "Фролов", "Журавльев", "Драконорожденный", "Егоров", "Петухов" , "Тимофеев", "Власов", "Калорв", "Лапин", "Сазонов", "Гордеев", "Уваров", "Брагин", "Якушев", "Зыков", "Шарапов", "Рожков", "Самоснов", "Лихачев", "Щукин", "Шаров", "Сафонов", "Птеродактель", "Устинов", "Исаев", "Капустин", "Кириллов", "Рогов", "Князев", "Кулагин", "Логинов", "Савин", "Туров", "Блинов", "Королев" , "Пестов", "Меркушев", "Гущин", "Буров", "Галкин", "Коновалов", "Громов", "Мельников", "Давыдов", "Русаков" };
string patr[100] = { "Витальев", "Иванов", "Сергеев", "Владимиров", "Алексеев", "Мизаров", "Степанов", "Каладиев", "Булатович", "Лексеевич", "Джиравоич", "Лопарович", "Хорашивич", "Шолораович", "Корупович", "Щокурепич", "Защеливич", "Степонвич", "Жиданович", "Жолкавович", "Долгичвич", "Зоглаоррвич", "Ларенвич", "Апотьлиавич", "Логравич", "Хологрвич", "Хорекунивич", "Экуравоич", "Федорович", "Болкивич", "Ждаровкич", "Шорокывич", "Героувич", "Носорович", "Гордунвич", "Цекрович", "Шитохович", "Дорекфич", "Жирович", "Эколович", "Кардинович", "Можетвич", "Твичевич", "Ютубович", "Тровович", "Дискордович", "Скапович", "Вкович", "Карандошович", "Стрелкович", "Усталович", "Щеголович", "Викингович", "Ероваич", "Евроводич", "Бытович", "Жетович", "Цукович", "Парович", "Мирович" , "Часович", "Владимриович", "Оакович", "Лапович", "Ушович", "Хокунович", "Шоуканович", "Скорпирович", "Вальгалович", "Асасинович", "Котович", "Лопухович", "Автомобиволич", "Ипотивович", "Сахарович", "Можетович", "Хорошкович", "Началович", "Жароквоич", "Нулевич", "Можектович", "Ктокович", "Собакович", "Радорович", "Флешович", "Хартович", "Резонович", "Сезонович", "Ансерович" , "Коверович", "Пикович", "Глазович", "Асович", "Легионвич", "Шадоувич", "Энович", "Пиполович", "Медневич", "Концович" };
string adres[10] = { "Советская","Куйбышева","Дедюкина","Екатерининская","Лысьвенская","Уральская","Ленина","Луначарского","Окулова","Пушкина"};
string telephone[100] = { "5424212", "2422134", "5622425", "2427896", "51432624", "511435", "657648", "133242345", "485666", "5143235", "6425389", "5176426", "5233156", "5413572", "5646789", "6942587", "1212536", "5464789", "1264367", "856149", "4535236", "6897884", "231565", "364251", "2114252", "32345356", "3268716", "11335363", "596242354", "235643645", "516588753", "598804234", "12314355", "9578823", "6553748", "12335366", "986876845", "3257518", "5535355", "32453564", "1532368", "1253978", "216786552", "05645236", "4124506", "0268934", "21504н64", "3245715", "54587910", "596356342", "126867654", "15255362", "15951", "2315", "123548", "1352315", "564661261", "2180354", "157854", "561567876" , "15657515", "1561835", "51535612", "5135752", "6556494", "2575626", "5136491", "2180765", "1256745315", "12353231", "1542458", "3558548", "152464515", "56548", "12315", "157833", "156345348", "5153533", "021353548", "351505", "5105332", "5113556", "8413156", "98575775", "3657554", "486521", "215654", "54612", "156548", "123545" , "15752354", "35194648", "1563534", "153352", "8242325645", "4345864", "4864", "56454", "51526", "6554" };

string rand_name()
{
	return (postname[rand() % 100] + " " + names[rand() % 100] + " " + patr[rand() % 100]);
}
string rand_datas()
{
	return (adres[rand() % 10]);
}
string rand_telephone()
{
	return telephone[rand() % 100];
}

human create_human()
{
	human tmp;
	tmp.fullname = rand_name();
	tmp.adres = rand_datas();
	tmp.telephone = rand_telephone();
	return tmp;
}

void fill_human(human* arr, int count)
{
	for (int i = 0; i < count; i++)
	{
		arr[i] = create_human();
	}
}

void show(const human tmp)
{
	cout << "ФИО: " << tmp.fullname<< "\nАдрес: " << tmp.adres << "\nНомер телефона: " << tmp.telephone << endl << endl;
}

void showTable(hash_table* table, int size)
{
	for (int i = 0; i < size; i++)
	{
		show(table->arr[i]);
	}
}

void print_human(human* arr, int count)
{
	for (int i = 0; i < count; i++)
	{
		show(arr[i]);
	}
}

int hash_f(string str, int size)
{
	long double a = (0.68245 * stoi(str));
	double a1 = size * (a - static_cast<int>(a));
	return static_cast<int>(a1);
}

void hash_table::add(human tmp, int size)
{
	int index = hash_f(tmp.telephone, size);
	int hash = index;
	if (arr[index].fullname == "Null")
	{
		arr[index] = tmp;
		return;
	}
	else
	{
		while (index < size)
		{
			if (arr[index].fullname == "Null")
			{
				arr[index] = tmp;
				return;
			}
			index++;
			collis++;
		}
		if (index >= size)
		{
			index = 0;
			collis++;
			while (index < hash)
			{
				if (arr[index].fullname == "Null")
				{
					arr[index] = tmp;
					return;
				}
				index++;
				collis++;
			}
		}
	}
}

void hash_table::findIndex(string num, int size)
{
	int hash = hash_f(num, size);
	int index = hash;
	while (arr[index].telephone != num && index < size)
	{
		index++;
	}
	if (index >= size)
	{
		index = 0;
		while (arr[index].telephone != num && index < hash)
		{
			index++;
		}
		if (index >= hash)
		{
			cout << "Такого человека нет";
		}
		else
		{
			cout << "Такой человек есть по индексу: " << index << endl << endl;
		}
	}
}

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int size;
	cout << "Введите кол-во элементов: ";
	cin >> size;
	cout << endl;
	human* arr = new human[size];
	hash_table table(size);
	fill_human(arr, size);
	for (int i = 0; i < size; i++)
	{
		table.add(arr[i], size);
	}
	showTable(&table, size);
	table.findIndex("346356", size);
	cout << endl << endl;
	cout << "Кол-во коллизий для " << size << " записей: " << collis << endl;
	delete[] arr;
	return 0;
}