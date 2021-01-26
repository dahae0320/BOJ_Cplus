#include <iostream>
#include <ctime>

struct tm curr_tm;

class Date {
  int year_;
  int month_;
  int day_;

  public:
    void SetData(int year, int month, int day) {
      year_ = year;
      month_ = month;
      day_ = day;
    }

    int JedgeYear() {
      if(((year_%4==0)&&(year_%100!=0))||(year_%400==0))
        return 1;
      else
        return 0;
    }

    void AddDay(int inc) {
      switch (month_) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
          day_ += inc;
          NextMonthY(31);
          
          break;
        case 4:
		    case 6:
		    case 8:
		    case 10:
		    case 12:
			    day_ += inc;
			    NextMonthY(30);
			    break;
		
		    case 2:
			    day_ = day_ + inc;
			    if (JedgeYear()==1 && day_ > 29){
            NextMonthY(29);;
          }
			    	
          else if (day_ > 28){
            NextMonthY(28);

          }
			    break;
		  }
    }
    
    void AddMonth(int inc) {
      month_ += inc;
      if(month_ >12 ){
        year_ += month_/12;
        month_ %= 12;
      }
    }

    void AddYear(int inc) {
      year_ = inc;
    }

    void NextMonthY(int lastD){
      if(day_>lastD) {
        month_ += day_/lastD;
        day_ %= lastD;
        if(month_ > 12){
          year_ += month_/12;
          month_ %= 12;    
        }
      }
    }

    void ShowDate() {
      std::cout << year_ << " 년 " << month_ << " 월 " << day_ << " 일 " ;

    }
};

int main() {
  Date date;
  struct tm curr_tm;
  time_t curr_time = time(nullptr);
  localtime_r(&curr_time, &curr_tm);

  int year = curr_tm.tm_year + 1900;
  int month = curr_tm.tm_mon + 1;
  int day = curr_tm.tm_mday;
  
  date.SetData(year, month, day);
  
  std::cout << "지날 날을 입력하세용 (일) : ";
  std::cin >> day;

  std::cout << "오늘 ";
  date.ShowDate();
  std::cout << "로부터" <<std::endl;
  std::cout << day << "일 뒤..." <<std::endl;

  date.AddDay(day);
  date.ShowDate();

  return 0;
}