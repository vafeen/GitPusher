#include <iostream>
#include <ctime>
#include <conio.h>
using std::to_string;
int main()
{
    std::time_t t = std::time(NULL);
    std::tm tm = *std::localtime(&t);
    std::string message = "git commit -m \"" + to_string(tm.tm_mday) + '.' + to_string(tm.tm_mon + 1) + '.' + to_string(tm.tm_year + 1900) + " " + to_string(tm.tm_hour) + ':' + to_string(tm.tm_min) + "\"";
    system("git add .");
    system(message.c_str());
    system("git push");
}