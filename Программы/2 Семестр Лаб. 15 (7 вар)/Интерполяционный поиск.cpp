#include <iostream>

using namespace std;

int fill(int k, char* n)
{
    for (int i = 0; i < k; i++)
    {
        cin >> n[i];
    }
    return 0;
}

int sort(int k, char* n)
{
    char tmp;
    for (int i = 0; i < k; i++)
    {
        for (int j=0; j < i-1; j++)
        {
            if (n[i]>n[j])
            {
                tmp = n[i];
                n[i] = n[j];
                n[j] = tmp;
            }
        }
    }
    return 0;
}

int print(int k, char* n)
{
    for (int i = 0; i < k; i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;
    return 0;
}

int main()
{
    setlocale(LC_ALL, "ru");
    bool fl = false;
    int k,place,mid,left,right;
    char p = 'H';
    cin >> k;
    right = k;
    left = 0;
    char* n = new char[k];
    mid = rand() % right-left;
    fill(k, n);
    sort(k, n);
    while ((left < right)&& fl==false)
    {
        if (n[mid] < p)
        {
            right -= 1;
            mid = left+rand() % (right-left);
        }
        else 
        {
            if (n[mid]>p)
            {
                left += 1;
                mid = left+rand() % (right - left);
            }
            else 
            {
                if (n[mid]==p)
                {
                    fl = true;
                    place = mid;
                }
            }
        }
    }

    if (fl == false)
    {
        cout << "There is no H";
    }
    else
    {
        print(k, n);
        cout << place+1;
    }
}
