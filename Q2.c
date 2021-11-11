#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void){

  int pid, status;
  pid = fork();
  if(pid==0){
  int num = 8; // Child Process
  int i = 1;
  while(i<=10){ 
    printf("%d x %d = %d\n",num, i, num*i);
    i++;
  }
   
 }
 else{ // Parent Process
   wait(&status);
   printf("In the parent Process :/nName is Tehreem Arshad and CNIC is 30000-1234567-8\n");
 }

   return 0;
}
