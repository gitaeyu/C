   
#include <iostream>
#include <cstdlib> // rand()에 대한 헤더파일
#include <ctime> // time에 대한 헤더파일
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
    char SomeDay[][40] = {"월요일", "화요일", "수요일", "목요일", "금요일", "토요일", "일요일"};
    worker = hire_worker(Net_profit);
    if (worker == 0)
        cout<<"현재 가진 돈은 " << Net_profit <<"원 입니다"<<endl;
    else
        cout<<"다음 주 아르바이트 생 수 "<< worker << "남은 정산금은 " << Net_profit <<"입니다" << endl;
    vector <int> week_sum = {};
    for (int i=0; i < 7 ; i++){
        int guest;
        guest = rand()%100+1;
        if (worker != 0)
            guest = guest * worker;
        cout << SomeDay[i] << "에 방문한 손님 : " << guest << "명 입니다"<< endl;
        daily = daily_sales(guest);
        week_sum.push_back(daily);
    }
    for (int i=0; i < 7 ; i++){
        Net_profit += week_sum[i];
        cout << SomeDay[i] << ": " << week_sum[i] << "원 입니다"<< endl;
    }
    cout<< "계좌에 있는 돈은" << Net_profit << "원 입니다."<< endl;
    return Net_profit;
}

void ending(int Net_profit){
    if (Net_profit > 500000000)
        cout<<("마지막주 최종 매출이 5억을 넘겨 프랜차이즈 사업을 시작합니다.");
    else
        cout<<("마지막주 최종 매출이 5억을 넘지 못했습니다. 게임오버");
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