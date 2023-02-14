#include <stdio.h>

const char *country[][32] =
{
    {"네덜란드","세네갈","에콰도르","카타르",
    "잉글랜드","웨일스","미국","이란",
    "아르헨티나","멕시코","폴란드","사우디",
    "프랑스","튀니지","덴마크","호주",
    "스페인","독일","일본","코스타리카",
    "벨기에","크로아티아","모로코","캐나다",
    "브라질","세르비아","카메룬","스위스",
    "포르투갈","우루과이","가나","대한민국"
    }
    
};

int main()
{
    printf("%c \n", country[0]);
    printf("%p \n", country[0][1]);
    printf("%p \n", country[0][2]);
    printf("%s ss", *country[0][3]);
    printf("%s", *country[0][4]);
    printf("%s", country[0][5]);
    return 0;
}