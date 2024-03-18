#include<stdio.h>
/*typedef struct {
	int Programming, Data Structures, Discrete Math , Algorithms;
}subjects;*/
typedef struct{
    int id, Programming, DS, Math , Algorithms;
    
}student;

int main(){
    int n,c=0;
student s[10]={
{101,134,145,134,234},
{102,145,146,176,175},
{103,187,197,198,178},
{104,168,185,165,146},
{105,179,197,157,176},
{106,158,167,168,156},
{107,178,156,145,167},
{108,157,157,174,157},
{109,186,167,168,156},
{110,157,157,163,167}};
printf("enter student id : ");
scanf("%d",&n);
for(int i=0;i<10;i++){
    if(s[i].id==n){
    printf("grades: \n Programming: %d\n Data Structures:%d\n, Math: %d\n , Algorithms: %d",s[i].Programming,s[i].DS,s[i].Math,s[i].Algorithms);
    c++;
    break;}}
    if(c==0) printf("wrong id");
return 0;
}
