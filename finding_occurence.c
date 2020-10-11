#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1000];
	int num=10;
    gets(str);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    printf("You entered %s\n",str);
   	
	char find = '0';
  
	print_occurences(str,find,num);

    return 0;
}

//occurence finding function
void print_occurences(char str[],char find,int number_of_chars){
	int i,j=0,counter=0;
	
	for(i=0;i<number_of_chars;i++){

	    while(str[j] != NULL){
	
			if(str[j]== find)
				counter++;	
			
			j++;
	
	    }
		
		printf("Occurence of %c = %d\n",find,counter);
		
		j=0;
		find++;
		counter=0;
	}
	
	
	
}
