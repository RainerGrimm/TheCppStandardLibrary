#include <chrono>
#include <iostream>

int main(){

  std::cout << std::fixed << '\n';
  
  std::cout << "Time since 1.1.19.70:\n" << '\n';

  auto timeNow= std::chrono::system_clock::now();
  auto duration= timeNow.time_since_epoch();
  std::cout << duration.count() << " microseconds " << '\n';
  
  typedef std::chrono::duration<double, std::ratio<1, 1000>> MyMilliSecondTick;
  MyMilliSecondTick milli(duration);
  std::cout << milli.count() << " milliseconds" << '\n';
  
  typedef std::chrono::duration<double> MySecondTick;
  MySecondTick sec(duration);
  std::cout << sec.count() << " seconds " << '\n';
  
  typedef std::chrono::duration<double, std::ratio<60>> MyMinuteTick;
  MyMinuteTick myMinute(duration);
  std::cout << myMinute.count() << " minutes" << '\n';

  typedef std::chrono::duration<double, std::ratio<3600>> MyHourTick;
  MyHourTick myHour(duration);
  std::cout << myHour.count() << " hours" << '\n';

  typedef std::chrono::duration<double, std::ratio<2700>> MyLessonTick;
  MyLessonTick myLesson(duration);
  std::cout << myLesson.count() << " lessons" << '\n';

  std::cout << '\n';

}
