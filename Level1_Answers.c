1:Get a number from user and add 2 to that number and print the result.

#include<stdio.h>

int sum(int number);

#define printd(x) printf("%d\n",x);

int number,result;

int main(){

printf("Give me a number: ");

scanf("%d",&number);

result=sum(number);

printd(result);
}

int sum(int number){
	number=number+2;
	return number;
}

2:Get a number from user and subtract 5 to that number and print the result.

#include<stdio.h>

int subtract(int number);

#define printd(x) printf("%d\n",x);

int number,result;

int main(){

printf("Give me a number: ");

scanf("%d",&number);

result=subtract(number);

printd(result);
}

int subtract(int number){
	number=number-5;
	return number;
}

3:Get a number from user and multiply 3 to that number and print the result.


#include<stdio.h>

int multiply(int number);

#define printd(x) printf("%d\n",x);

int number,result;

int main(){

printf("Give me a number: ");

scanf("%d",&number);

result=multiply(number);

printd(result);
}

int multiply(int number){
	number=number*3;
	return number;
}

4:Get a number from user and divide by the number by 6 and print the quotient.

#include<stdio.h>

int quotient(int number);

#define printd(x) printf("%d\n",x);

int number,result;

int main(){

printf("Give me a number: ");

scanf("%d",&number);

result=quotient(number);

printd(result);
}

int quotient(int number){
	number=number/6;
	return number;
}


5:Get a number from user and divide by the number by 8 and print the remainder.

#include<stdio.h>

int remainder(int number);

#define printd(x) printf("%d\n",x);

int number,result;

int main(){

printf("Give me a number: ");

scanf("%d",&number);

result=remainder(number);

printd(result);
}

int remainder(int number){
	number=number%8;
	return number;
}

6:Get a two-digit number from user and print the one’s digit.

#include<stdio.h>

char digit(char number);

#define printd(x) printf("%d\n",x);

char number,result;

int main(){

printf("Give me a two digit number: ");

scanf("%d",&number);

result=digit(number);

printd(result);
}

char digit(char number){
	number=number%10;
	return number;
}


7:Get a two-digit number from user and print the ten’s digit.

#include<stdio.h>

char digit(char number);

#define printd(x) printf("%d\n",x);

char number,result;

int main(){

printf("Give me a two digit number: ");

scanf("%d",&number);

result=digit(number);

printd(result);
}

char digit(char number){
	number=number/10;
	return number;
}

8:Get a three-digit number from user and print the one’s digit.

#include<stdio.h>

char digit(char number);

#define printd(x) printf("%d\n",x);

char number,result;

int main(){

printf("Give me a three digit number: ");

scanf("%d",&number);

result=digit(number);

printd(result);
}

char digit(char number){
	number=number%10;
	return number;
}

9:Get a three-digit number from user and print the hundred’s digit.

#include<stdio.h>

char digit(char number);

#define printd(x) printf("%d\n",x);

int number,result;

int main(){

printf("Give me a three digit number: ");

scanf("%d",&number);

result=digit(number);

printd(result);
}

char digit(char number){
	number=number/100;
	return number;
}

10:Get a three-digit number from user and print the ten’s digit.

#include<stdio.h>

int digit(int number);

int number,result;

#define printd(x) printf("%d\n",x);

int main(){

printf("Give me a three digit number: ");

scanf("%d",&number);

result=digit(number);
printd(result);
}

int digit(int number){
	char temp;
	temp=number%100;
	number=temp/10;
	return number;
}





























































































