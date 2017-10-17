/* Program to read a file */
#include <stdio.h>
int main()
{
 char c;
 int counta=0;
 int countb=0;
 int countc=0;
 int countd=0;
 int counte=0;
 int countf=0;
 int countg=0;
 int counth=0;
 int counti=0;
 int countj=0;
 int countk=0;
 int countl=0;
 int countm=0;
 int countn=0;
 int counto=0;
 int countp=0;
 int countq=0;
 int countr=0;
 int counts=0;
 int countt=0;
 int countu=0;
 int countv=0;
 int countw=0;
 int countx=0;
 int county=0;
 int countz=0;

 FILE *fptr;
 if ( ( fptr = fopen( "data.dat", "r" ) ) == NULL )
 {
 printf("Error opening file\n");
 return 1;
 }
 while ( ( c = fgetc(fptr) ) != EOF )
 {
if ( c == 'a' || c == 'A' )
 {
 counta++;
 }
  if ( c == 'b' || c == 'B' )
 {
 countb++;
 }
    if ( c == 'c' || c == 'C' )
 {
 countc++;
 }
	  if ( c == 'd' || c == 'D' )
 {
 countd++;
 }
	   if ( c == 'e' || c == 'E' )
 {
 counte++;
 }
  if ( c == 'f' || c == 'F' )
 {
 countf++;
 }
    if ( c == 'g' || c == 'G' )
 {
 countg++;
 }
	  if ( c == 'h' || c == 'H' )
 {
 counth++;
 }
	  if ( c == 'i' || c == 'I' )
 {
 counti++;
 }
  if ( c == 'j' || c == 'J' )
 {
 countj++;
 }
    if ( c == 'k' || c == 'K' )
 {
 countk++;
 }
	  if ( c == 'l' || c == 'D' )
 {
 countl++;
 }
	   if ( c == 'm' || c == 'E' )
 {
 countm++;
 }
  if ( c == 'n' || c == 'F' )
 {
 countn++;
 }
    if ( c == 'o' || c == 'G' )
 {
 counto++;
 }
	  if ( c == 'p' || c == 'P' )
 {
 countp++;
 }
if ( c == 'q' || c == 'Q' )
 {
 countq++;
 }
  if ( c == 'r' || c == 'R' )
 {
 countr++;
 }
    if ( c == 's' || c == 'S' )
 {
 counts++;
 }
	  if ( c == 't' || c == 'T' )
 {
 countt++;
 }
	   if ( c == 'u' || c == 'U' )
 {
 countu++;
 }
  if ( c == 'v' || c == 'V' )
 {
 countv++;
 }
    if ( c == 'w' || c == 'W' )
 {
 countw++;
 }
	  if ( c == 'x' || c == 'X' )
 {
 countx++;
 }
	  if ( c == 'y' || c == 'Y' )
 {
 county++;
 }
  if ( c == 'z' || c == 'Z' )
 {
 countz++;
 }
 }
 if ( fclose( fptr ) == EOF )
 {
 printf("Error closing file\n");
 return 2;
 }
 printf("Letter Frequency\n");
 printf("  A     %d\n",counta);
 printf("  B     %d\n",countb);
 printf("  C     %d\n",countc);
 printf("  D     %d\n",countd);
 printf("  E     %d\n",counte);
 printf("  F     %d\n",countf);
 printf("  G     %d\n",countg);
 printf("  H     %d\n",counth);
 printf("  I     %d\n",counti);
 printf("  J     %d\n",countj);
 printf("  K     %d\n",countk);
 printf("  L     %d\n",countl);
 printf("  M     %d\n",countm);
 printf("  N     %d\n",countn);
 printf("  O     %d\n",counto);
 printf("  P     %d\n",countp);
 printf("  Q     %d\n",countq);
 printf("  R     %d\n",countr);
 printf("  S     %d\n",counts);
 printf("  T     %d\n",countt);
 printf("  U     %d\n",countu);
 printf("  V     %d\n",countv);
 printf("  W     %d\n",countw);
 printf("  X     %d\n",countx);
 printf("  Y     %d\n",county);
 printf("  Z     %d\n",countz);
 return 0;
}