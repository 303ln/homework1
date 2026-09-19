// #include <stdio.h> //8
// int main(){
//     char str[100];
//     char *p;
//     printf("string: \n");
//     scanf("%99s",str);
//     p=str;
//     int len=0;
//     while (*p != '\0') {
//         len+=1;
//         p++;

//     }
//     printf("lenght: %d\n",len);
//     return 0;
// }




// #include <stdio.h> //1
// int fct(int n) {          
//     int res= 1;
//     for (int i= 2; i <= n; i++) {
//         res = res*i;
//     }
//     return res;
// }

// int strong(int num) {
//     int sum=0;
//     int orig= num;
    
//     while (num > 0) {
//         int digit= num % 10;
//         sum=sum + fct(digit);
//         num=num/10;
//     }
    
//     return sum==orig;
// }

// int main() {
//     int start, end;
//     printf("int numb: ");
//     scanf("%d %d", &start, &end);
    
//     for (int i= start; i<= end; i++) {
//         if (strong(i)) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");
//     return 0;
// }





// #include <stdio.h>  //2
// int main(){
//     char str[100];
//     int counts[26]={0};

//     printf("string:");
//     fgets(str,100,stdin);
    
    
//     for (int i=0; str[i] !='\0';i++){
//         if(str[i]>='a'&&str[i]<='z'){
//             int idx=str[i]-'a';
//             counts[idx]++;
//         }
//     }
//     for (int i=0;i<26;i++){
//         if (counts[i]>0){
//             printf("%c: %d\n",'a'+i,counts[i]);
//         }
//     }
    
//     return 0;
// }


#include <stdio.h>
#include <string.h>
int main(){
    char p[4];
    printf("password: ");
    scanf("%s",p);
    int len = strlen(p);
    int attemps = 0;

     for (int i = 32; i<=126; i++){
        attemps++;
        if (len==1 && p[0]==i){
            printf("password = %c\n");
            printf("attempts: %d",attemps);
            return 0;
        }

     }
     for (int i = 32; i<=126; i++){
        for (int j=32;j<=126;j++){
            attemps++;
            if (len==2 && p[0]==i && p[1]==j){
                printf("password = %c%c\n");
            printf("attempts: %d",attemps);
            return 0;
            }
        }
     }

     for (int i = 32; i<=126; i++){
        for (int j=32;j<=126;j++){
            for (int k = 32; k <= 126; k++){
                attemps++;
                if (len==3 && p[0]==i && p[1]==j && p[2]==k){
                    printf("password = %c%c%c\n");
                printf("attempts: %d",attemps);
                return 0;
                }
            }
        }
    }
    return 0;
}

