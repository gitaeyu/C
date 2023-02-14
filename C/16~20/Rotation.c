// #include <stdio.h>


// int main()
// {
//   int arr[4][4] =
//   {
//     {1,2,3,4},
//     {5,6,7,8},
//     {9,10,11,12},
//     {13,14,15,16}
//   };

//   for(int i=0;i<4;i++)
//   {
//     for(int j=0;j<4;j++)
//     {
//       arr[j][3-i]=arr[i][j];
//     }
//   }
//   for(int i=0;i<4;i++)
//   {
//     for(int j=0;j<4;j++)
//     {
//       printf("%d ",arr[i][j]);
//     }
//     printf("\n");
//   }

// }
#include <stdio.h>

int main(void)
{
    int arr[3][2];
    int i, j;
    for(i=0; i<3; i++)
        for(j=0; j<2; j++)
            printf("%p \n", &arr[i][j]);
    return 0;
}