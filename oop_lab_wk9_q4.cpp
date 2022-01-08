#include<iostream>
using namespace std;
class dis
{
private:
    int feet;
    int inch;

public:
    void set_dis()
    {
        cout << "Enter feets: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inch;
    }

    dis operator+(dis &dis1)
    {
        dis temp;
        temp.inch = inch + dis1.inch;
        temp.feet = feet + dis1.feet + (temp.inch / 12);
        temp.inch = temp.inch % 12;
        return temp;
    }

    dis operator-(dis &dis1)
    {
        dis temp;
        temp.inch = inch - dis1.inch;
        temp.feet = feet - dis1.feet;
        return temp;
    }

    dis operator++()
    {
        dis temp;
        temp.inch = 4 + inch;
        temp.feet = 4 + feet;
        return temp;
    }

    void get_dis()
    {
        cout << feet << " feets and " << inch << " inches ";
    }
};

int main()
{
    dis d1, d2;
    d1.set_dis();
    d2.set_dis();
    dis sum = d1 + d2;
    sum.get_dis();
    dis sub = d1 - d2;
    cout << "\n";
    sub.get_dis();
    dis inc = ++d1;
    cout << "\n";
    inc.get_dis();
}