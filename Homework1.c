// #include<stdio.h>
// int main(){  //1
//     int n;
//     printf("n: ");
//     scanf("%d",&n);
//     int numb=1;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n-i;j++){
//              printf(" ");
//         }
//         for (int j=1;j<=i;j++){
//             printf("%d",numb);
//             numb++;
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int n;
//     printf("len: ");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for (int i=0;i<n;i++){
//         int dubl=0;
//         for (int j=0;j<i;j++){
//             if (arr[i]==arr[j]){
//                 dubl=1;
//                 break;
//             }
//         }
//         if (!dubl){
//             printf("%d",arr[i]);
//         }
//     }
//     return 0;
// }



// #include<stdio.h> //3
// int main(){
//     char start[100];
//     char fin[100];
//     char *p;
//     char *p1;
//     printf("string:");
//     scanf("%99s",start);
//     p=start;
//     p1=fin;
//     while (*p!='\0'){
//         *p1=*p;
//         p++;
//         p1++;
//     }
//     *p1='\0';
//     printf("%s\n",fin);
//     return 0;
// }



#include <stdio.h>

void input(int *arr, int rows, int cols) {
    printf("elements:\n");
    for (int i= 0; i < rows; i++) {
        for (int j = 0; j< cols; j++) {
            scanf("%d", (arr+i*cols+j));
        }
    }
}
void print(int *arr, int rows, int cols) {
    printf("arr:\n");
    for (int i = 0; i<rows; i++) {
        for (int j = 0; j <cols; j++) {
            printf("%d ",*(arr+i*cols+j));
        }
        printf("\n");
    }
}
int main() {
    int rows, cols;
    printf("rows.cols: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    input((int*)arr, rows, cols);
    print((int*)arr, rows, cols);
    return 0;
}

