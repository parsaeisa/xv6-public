#include "types.h"
#include "stat.h"
#include "user.h"

void
test(void)
{
  // int cur_pid;//, pid;  
  // char *ptr;
  
  //int  childpid ;

  //////////////////////////////////////////////////////////
  //part 1 test//////////////////////////////////////////////
  // int child_pid = fork();
  // if(child_pid > 0){
  //     int wtime;
  //     int rtime ;     
  //     printf(1,"parent proccess is running \n");      
  //     while(waitx(&wtime, &rtime)!=-1);
  //     printf(1,"wtime : %d  rtime : %d \n" , wtime, rtime);
  // }
  // else
  // {
  //   int wtime;
  //   int rtime ;     
  //   sleep(100);
  //   waitx( &wtime , &rtime) ;
  //   printf(1,"wtime : %d  rtime : %d \n" , wtime, rtime);
  // }  
  /////////////////////////////////////////////////////////  
  //part2 test//////////////////////////////////////////////
  // fork();
  // fork();
  // cur_pid = getpid();
  // set_priority(70);
  // sleep(100);
  // fork();
  // sleep(100);
  // set_priority(50);
  // sleep(100);
  // ptr = (char *)malloc(((10000 + cur_pid) * cur_pid) * sizeof(char));
  // memset(ptr, 'a', (10000 + cur_pid) * cur_pid);
  // while(waitx(&wtime, &rtime)!=-1);
  //////////////////////////////////////////////////////////
  //part3 test//////////////////////////////////////////////
  // fork();
  // fork();
  // cur_pid = getpid();
  // sleep(100);
  // fork();
  // sleep(100);
  // ptr = (char *)malloc(((10000 + cur_pid) * cur_pid) * sizeof(char));
  // memset(ptr, 'a', (10000 + cur_pid) * cur_pid);
  // while(waitx(&wtime, &rtime)!=-1);

  // printf(1,"shiiiit");
  // ptr = (char *)malloc(((10000 + cur_pid) * cur_pid) * sizeof(char));
  // memset(ptr, 'a', (10000 + cur_pid) * cur_pid);
  // printf(1, " pid: %d\n", cur_pid);
  //while( wait()!=-1);
  // while( waitx( &wtime, &rtime)!=-1);
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
  //////////////////////////////////////////////////////////
}

int
main(void)
{
  test();
  exit();
}