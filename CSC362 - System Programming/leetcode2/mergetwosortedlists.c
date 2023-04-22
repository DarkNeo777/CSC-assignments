#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int romanToInt(char * s){
    int length = strlen(s);
    int index = -1, sum = 0;
    
    while(++index < length) {
        switch(s[index]){
            case 'I': 
                if(s[index+1] && (s[index+1] == 'V' || s[index+1] == 'X')) sum -= 1;
                   else sum += 1;
                break;
            case 'X': 
                if(s[index+1] && (s[index+1] == 'L' || s[index+1] == 'C')) sum-=10;
                   else sum+=10;
                break;
            case 'C':                
                if(s[index+1] && (s[index+1] == 'D' || s[index+1] == 'M')) sum-=100;
                   else sum+=100;
                break;
            case 'V':
                sum+=5;
                break;
            case 'L':
                sum+=50;
                break;
            case 'D':
                sum+=500;
                break;
            case 'M':
                sum+=1000;
                break;
            default:
                break;   
        }
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    char s[] = "LVIII";
    int output = romanToInt(s);
    printf("%d",output);
    return 0;
}
