#pragma once
#include <chrono>
class TimeManager
{
	//Guarda un punto en el tiempo
	std::chrono::high_resolution_clock::time_point start 
		= std::chrono::high_resolution_clock::now();
public:
	//unsigned no se pueden guardar numeros negativos
	unsigned int frameCount;
	float time;
	float deltaTime;
	
	static TimeManager& getInstance();
	void NextFrame();
};

