char getGrade(int a, int b, int c) {
 int score = (a + b + c) / 3 ;
  return (score >= 90)? 'A' 
       : (score >= 80)? 'B' 
       : (score >= 70)? 'C' 
       : (score >= 60)? 'D'
       : 'F';
}