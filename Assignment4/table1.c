// CH-230-A
// a4_p1.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de


// #include <stdio.h>
// #include <math.h>

//     int main () {
//         float a, x, y, z;

//         printf("Enter lower limit:\n");
//         scanf("%f", &x);
//         printf("Enter upper limit:\n");
//         scanf("%f", &y);
//         printf("Enter step:\n");
//         scanf("%f", &z);

//         // Print table with a, area and perimeter respectively
//         for (a = x; a <= y; a += z) { 
//             printf("%f %f %f\n", a, a * a * M_PI, 2 * a * M_PI);
//         }
//         return 0;
    
// }


// Check this later

// #include<stdio.h>
// #include <stdlib.h>
 
// int main()
// {
//     int n, a = 1, i, j;
//     scanf("%d",&n);
//     int arr[n][n];
//     for(i = 0; i < n; i++)
//     {
//         if(i % 2==0)
//         {
//             for(j = 0;j < n; j++)
//             {
//                 if(i <= j)
//                 { 
//                     arr[j][i]=a;
//                     a+=1;
//                 }
//             }
//         }
//         else
//         {
//             for(j=n-1;j>0;j--)
//             {
//                 if(i<=j)
//                 {
//                     arr[j][i]=a;
//                     a++;
//                 }
//             }
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<i+1;j++)
//         {
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



//FOR LOOPS

// #include <stdio.h>
// int main()
// {
//    int i, j;
//    for (i=1,j=1 ; i<3 || j<5; i++,j++)
//    {
// 	printf("%d, %d\n",i ,j);
//    }
//    return 0;
// }
//OUTPUT
// 1, 1
// 2, 2
// 3, 3
// 4, 4

// #include <stdio.h>
// int main()
// {
//    for (int i=0; i<2; i++)
//    {
// 	for (int j=0; j<4; j++)
// 	{
// 	   printf("%d, %d\n",i ,j);
// 	}
//    }
//    return 0;
// }

// OUTPUT
// 0, 0
// 0, 1
// 0, 2
// 0, 3
// 1, 0
// 1, 1
// 1, 2
// 1, 3

// 2D Array
// #include<stdio.h>
// int main(){
//    /* 2D array declaration*/
//    int disp[2][3];
//    /*Counter variables for the loop*/
//    int i, j;
//    for(i=0; i<2; i++) {
//       for(j=0;j<3;j++) {
//          printf("Enter value for disp[%d][%d]:", i, j);
//          scanf("%d", &disp[i][j]);
//       }
//    }
//    //Displaying array elements
//    printf("Two Dimensional array elements:\n");
//    for(i=0; i<2; i++) {
//       for(j=0;j<3;j++) {
//          printf("%d ", disp[i][j]);
//          if(j==2){
//             printf("\n");
//          }
//       }
//    }
//    return 0;
// }

//Practice 

#include <stdio.h>
#include <math.h>
int main() {
    float i,l, u, s;
    scanf("%f", &l);
    scanf("%f", &u);
    scanf("%f", &s);

    for (i=l; i <= u; i += s)
    {
        printf("%f %f %f\n", i, i * i * M_PI, 2 * M_PI * i);
    }
    return 0;
}