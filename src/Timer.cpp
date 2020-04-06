//
// Created by Alex Glushko on 06.04.2020.
//

#include "Timer.h"

namespace archiver
{

void Timer::start()
{
    time_start = double(clock());
}

void Timer::finish()
{
    time_finish = double(clock());
}

std::string Timer::result_string()
{
    //TODO:: Check time value
    std::string buf;
    buf += std::to_string(int(time_finish - time_start) / CLOCKS_PER_SEC) + "s " +
           std::to_string(int(time_finish - time_start) % CLOCKS_PER_SEC) + "ms";

    return buf;
}

void Timer::reset()
{
    time_start = 0;
    time_finish = 0;
}

}