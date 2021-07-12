#include "types.h"
#include "stat.h"
#include "user.h"

void
test(void)
{
  int cur_pid;//, pid;  
  char *ptr;
  int wtime;
  int rtime ;     
  //int  childpid ;

  // pid = fork();
  // if(pid==0){
  //   // printf(1, " pid: %d, priority: %d\n", getpid(), set_priority(70));
  //   pid = fork();
  //   if(pid==0){
  //     set_priority(10);
  //     printf(1, " pid: %d, priority: %d\n", getpid(), 10);
  //   }
  //   else{
  //     set_priority(20);
  //     printf(1, " pid: %d, priority: %d\n", getpid(), 20);
  //   }
  // }
  // else{
  //   // printf(1, " pid: %d, priority: %d\n", getpid(), set_priority(70));
  //   pid = fork();
  //   if(pid==0){
  //     set_priority(10);
  //     printf(1, " pid: %d, priority: %d\n", getpid(), 10);   
  //   }
  //   else{
  //     set_priority(30);
  //     printf(1, " pid: %d, priority: %d\n", getpid(), 30);      
  //   }
  // }
  
  // childpid =
   fork();
  fork();
  fork();
  cur_pid = getpid();
  set_priority(cur_pid % 101);

  // printf(1,"shiiiit");
  ptr = (char *)malloc(((10000 + cur_pid) * cur_pid) * sizeof(char));
  memset(ptr, 'a', (10000 + cur_pid) * cur_pid);
  // printf(1, " pid: %d\n", cur_pid);
  //while( wait()!=-1);
  while( waitx( &wtime, &rtime)!=-1);
  // printf(1, " pid: %d, wtime: %d, rtime: %d\n", cur_pid, wtime, rtime);
  
  // if (childpid > 0)
  // {
  //   // printf(1, " pid: %d, priority: %d\n", cur_pid, set_priority(70));
  //   // printf(1, " pid: %d, priority: %d\n", cur_pid, set_priority(80));    

  //   waitx(&wtime, &rtime);
  //   // printf(1, " pid: %d, wtime: %d, rtime: %d\n", cur_pid, wtime, rtime);        
  // }
  // else
  // {
  //   //printf(1, " pid: %d, priority: %d\n", cur_pid, set_priority(70));
  //   //printf(1, " pid: %d, priority: %d\n", cur_pid, set_priority(50));
  //   sleep(100);
  //   // sleep(100);
  //   wtime = 0;
  //   rtime = 0;
  //   waitx(&wtime, &rtime);
  //   // printf(1, " pid: %d, wtime: %d, rtime: %d\n", cur_pid, wtime, rtime);
  // }
}

int
main(void)
{
  test();
  exit();
}