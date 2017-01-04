/* This file was generated by lus2lic version master.668 (35901e970a0c377cc36d6437dcbc61beb8001b54). */
/*  lus2lic -2c convertible.lus -n main */
/* on ovaz the 27/10/2016 at 11:39:07 */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "convertible_main.h" 
/* Print a promt ? ************************/
static int ISATTY;
/* MACROS DEFINITIONS ****************/
#ifndef TT
#define TT "1"
#endif
#ifndef FF
#define FF "0"
#endif
#ifndef BB
#define BB "bottom"
#endif
#ifdef CKCHECK
/* set this macro for testing output clocks */
#endif

/* Standard Input procedures **************/
_boolean _get_bool(char* n){
   char b[512];
   _boolean r = 0;
   int s = 1;
   char c;
   do {
      if(ISATTY) {
         if((s != 1)||(r == -1)) printf("\a");
         // printf("%s (1,t,T/0,f,F) ? ", n);
      }
      if(scanf("%s", b)==EOF) exit(0);
      if (*b == 'q') exit(0);
      s = sscanf(b, "%c", &c);
      r = -1;
      if((c == '0') || (c == 'f') || (c == 'F')) r = 0;
      if((c == '1') || (c == 't') || (c == 'T')) r = 1;
   } while((s != 1) || (r == -1));
   return r;
}
_integer _get_int(char* n){
   char b[512];
   _integer r;
   int s = 1;
   do {
      if(ISATTY) {
         if(s != 1) printf("\a");
         //printf("%s (integer) ? ", n);
      }
      if(scanf("%s", b)==EOF) exit(0);
      if (*b == 'q') exit(0);
      s = sscanf(b, "%d", &r);
   } while(s != 1);
   return r;
}
#define REALFORMAT ((sizeof(_real)==8)?"%lf":"%f")
_real _get_real(char* n){
   char b[512];
   _real r;
   int s = 1;
   do {
      if(ISATTY) {
         if(s != 1) printf("\a");
         //printf("%s (real) ? ", n);
      }
      if(scanf("%s", b)==EOF) exit(0);
      if (*b == 'q') exit(0);
      s = sscanf(b, REALFORMAT, &r);
   } while(s != 1);
   return r;
}
/* Standard Output procedures **************/
void _put_bottom(char* n){
   if(ISATTY) printf("%s = ", n);
   printf("%s ", BB);
   if(ISATTY) printf("\n");
}
void _put_bool(char* n, _boolean _V){
   if(ISATTY) printf("%s = ", n);
   printf("%s ", (_V)? TT : FF);
   if(ISATTY) printf("\n");
}
void _put_int(char* n, _integer _V){
   if(ISATTY) printf("%s = ", n);
   printf("%d ", _V);
   if(ISATTY) printf("\n");
}
void _put_real(char* n, _real _V){
   if(ISATTY) printf("%s = ", n);
   printf("%f ", _V);
   if(ISATTY) printf("\n");
}
/* Output procedures **********************/
#ifdef CKCHECK
void %s_BOT_n(void* cdata){
   _put_bottom("n");
}
#endif
/* Output procedures **********************/
void convertible_main_O_n(void* cdata, _integer _V) {
   _put_int("n", _V);
}
/* Main procedure *************************/
int main(){
  int _s = 0;
  _boolean Start;
  _boolean Parked;
  _boolean Rot;
  _boolean Tic;
  _boolean OnOff;
  _boolean Done;
  _real Distance;
  _boolean Danger;
  _boolean Locked;
  _real Speed;
  _real Hood_Speed;
    convertible_main_ctx_type* ctx = convertible_main_ctx_new_ctx(NULL);

  printf("#inputs \"Start\":bool \"Parked\":bool \"Rot\":bool \"Tic\":bool \"OnOff\":bool \"Done\":bool \"Distance\":real\n");
  printf("#outputs \"Danger\":bool \"Locked\":bool \"Speed\":real \"Hood_Speed\":real\n");

  /* Main loop */
  ISATTY = isatty(0);
  while(1){
    if (ISATTY) printf("#step %d \n", _s+1);
    else if(_s) printf("\n");
    fflush(stdout);
    ++_s;
    Start = _get_bool("Start");
    Parked = _get_bool("Parked");
    Rot = _get_bool("Rot");
    Tic = _get_bool("Tic");
    OnOff = _get_bool("OnOff");
    Done = _get_bool("Done");
    Distance = _get_real("Distance");
    convertible_main_step(Start,Parked,Rot,Tic,OnOff,Done,Distance,&Danger,&Locked,&Speed,&Hood_Speed,ctx);
    // printf("%d %d %d %d %d %d %f #outs %d %d %f %f\n",Start,Parked,Rot,Tic,OnOff,Done,Distance,Danger,Locked,Speed,Hood_Speed);
    printf("%d %d %f %f\n",Danger,Locked,Speed,Hood_Speed);
  }
  return 1;
   
}