#include <chrono>
#include <iostream>
#include <iomanip>
#pragma warning(disable : 4996)

int main()
{
	auto start = std::chrono::system_clock::now();
	auto start_time = std::chrono::system_clock::to_time_t(start);
	std::cout << std::put_time(std::localtime(&start_time), "%F %T") << std::endl;

	auto end = std::chrono::system_clock::now();
	auto end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << std::put_time(std::localtime(&end_time), "%F %T") << std::endl;

	auto sleep_time = end - start;
	std::cout << sleep_time.count() << "ns" << std::endl;
}