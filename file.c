// #include<stdio.h>
// int main(){
//     FILE *fp;
//     int num, count,i;
//     printf("how many numbers you want");
//     scanf("%d",&count);
//     fp = fopen("hello.txt","w+");
//     for(i=0;i<count;i++){
//         printf("Enter any number");
//         scanf("%d",&num);
//         putw(num,fp);
//     }
//     fclose(fp);
//     fp = fopen("hello.txt","r");
//     if(fp==NULL)
//         printf("error in opening file");
//     else{
//         num = getw(fp);
//         while(num != EOF){
//             printf("%d ",num);
//             num = getw(fp);
//         }
//         fclose(fp);
//     }
    
// }
// #include<stdio.h>
// main()
// {
//     FILE *fp;
//     int count,i;char str[115];
//     fp = fopen("sampleStr.txt","w");
//     if(fp==NULL)
//     printf("error in opening file");
//     else{
//         printf("Enter the string: ");
//         scanf("%[^/n]",str);
//         fputs(str,fp);
//         fclose(fp);
//     }
//     fopen("sampleStr.txt","r");
//     while((fgets(str,100,fp))!= NULL)
//         printf("%s",str);
//     fclose(fp);
// }   
#include<stdio.h>
// int main(){
//     typedef struct {
//         char name[20];
//         int accNo;
//         float balance;
//     }account;
//     account acc;
//     FILE *fp;
//     fp = fopen("struct.txt","w");
    
//     printf("ENter customer name");
//     scanf(" %s",acc.name);
//     printf("Enter account number\n");
//     scanf("%d",&acc.accNo);
//     printf("Enter balance\n");
//     scanf("%f",&acc.balance);

// }
// int main(){
//     char ch;
//     for(int i=65;i<=90;i++){
//         printf("%c",i);
//     }
// }
#include<string.h>
// int main(){
//     int l,i;
//     char a[30],ch;
//     printf("ENter a string: \n");
//     gets(a);
//     for(i=0;i<l/2;i++){
//         ch = a[i];
//         a[i] = a[l-1-i];
//         a[l-1-i] = ch;
//     }

//     printf("\n %s",a);
//     return 0;
// }
// int main(){
//     FILE *fp;
//     char ch;
//     fp = fopen("hi.txt","w");
//     printf("ENter a charcater");
//     for(int i=0;i<3;i++){
//         scanf("%c",&ch);
//         putc(ch,fp);
//         }
//     fclose(fp);

//     fopen("hi.txt","r");
//     char c;
//     c= getc(fp);
//     while(c != EOF)
//     {
//       printf("%c",c);
//       c= getc(fp);
//     }

// }
// int main(){
//     char str[20];
//     fp = fopen("hi.txt","w");
//     printf("Enter a string");
//     scanf("%s",str);
//     fputs(str,fp);
//     fclose(fp);

//      fp = fopen("hi.txt","r");
//      while(fgets(str,20,fp)!= NULL)
//      {
//         printf("%s",str);
//      }
// }




#include <stdio.h>
// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
if (n <= 1)
return n;
else
return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
int n;
printf("Enter the value of n: ");
scanf("%d", &n);
printf("Fibonacci series up to %d terms:\n", n);
for (int i = 0; i < n; i++) {
printf("%d ", fibonacci(i));
}
return 0;
}