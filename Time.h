#ifndef TIME_H
#define TIME_H
class Time {
public:
  Time();
  void setTime(int,int,int);
  void printUniversal();
  void printStandard();
private:
    int hour; // 0 to 23
	int minute; // 0 to 59
	int second; // 0 to 59  	
};

#endif
