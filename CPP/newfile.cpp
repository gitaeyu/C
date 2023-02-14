   
#include <iostream>
#include <cstdlib> // rand()�� ���� �������
#include <ctime> // time�� ���� �������
#include <vector>
#include <algorithm>
#include <tuple> 
using namespace std;

int daily_sales(int guest){
    srand(time(NULL));
    int price[] =
    {18000, 19000, 19000, 17000, 18000, 18000, 8000, 15000, 5000, 7000,
     12000, 5000, 4000, 4500, 4500, 2500, 2000, 1000, 7000, 7000};
    int daily_sum = 0;
    int num_menu;
    int guest_sum =0;
    int number;
    for (int i=0 ; i<guest; i++)
    {
        num_menu = rand()%5+1;
        guest_sum = 0;
        for (int j=0 ; j < num_menu;j++){
                number = rand()%20+1;
                guest_sum += price[number];
        }
        daily_sum += guest_sum;
    }
    daily_sum = daily_sum*0.85;
    return daily_sum;
}

int hire_worker(int &netprofit){
    int worker = 0;
    if (netprofit>0)
    {
        worker = netprofit /1500000;
        netprofit = netprofit - 1500000*worker;
        return worker;
    }
    else
        return worker;
};

int week(int Totalmoney){
    srand(time(NULL));
    int worker;
    int Net_profit = Totalmoney;
    int guest;
    int daily;
    char SomeDay[][40] = {"������", "ȭ����", "������", "�����", "�ݿ���", "�����", "�Ͽ���"};
    worker = hire_worker(Net_profit);
    if (worker == 0)
        cout<<"���� ���� ���� " << Net_profit <<"�� �Դϴ�"<<endl;
    else
        cout<<"���� �� �Ƹ�����Ʈ �� �� "<< worker << "���� ������� " << Net_profit <<"�Դϴ�" << endl;
    vector <int> week_sum = {};
    for (int i=0; i < 7 ; i++){
        int guest;
        guest = rand()%100+1;
        if (worker != 0)
            guest = guest * worker;
        cout << SomeDay[i] << "�� �湮�� �մ� : " << guest << "�� �Դϴ�"<< endl;
        daily = daily_sales(guest);
        week_sum.push_back(daily);
    }
    for (int i=0; i < 7 ; i++){
        Net_profit += week_sum[i];
        cout << SomeDay[i] << ": " << week_sum[i] << "�� �Դϴ�"<< endl;
    }
    cout<< "���¿� �ִ� ����" << Net_profit << "�� �Դϴ�."<< endl;
    return Net_profit;
}

void ending(int Net_profit){
    if (Net_profit > 500000000)
        cout<<("�������� ���� ������ 5���� �Ѱ� ���������� ����� �����մϴ�.");
    else
        cout<<("�������� ���� ������ 5���� ���� ���߽��ϴ�. ���ӿ���");
}
int main()
{   srand(time(NULL));
    int Totalmoney = 0;
    Totalmoney=week(Totalmoney);
    Totalmoney=week(Totalmoney);
    Totalmoney=week(Totalmoney);
    Totalmoney=week(Totalmoney);
    ending(Totalmoney);
}