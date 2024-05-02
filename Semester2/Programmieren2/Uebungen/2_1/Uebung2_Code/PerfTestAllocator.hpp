#pragma once

#include <iostream>
#include <chrono>
#include "Vector.h"

inline void perfTestAllocator(Vector& v, int elementCount, int iterations)
{
	std::chrono::duration<double> totalDuration{ 0 };
	for (int i = 0; i < iterations; ++i)
	{
		const auto start{ std::chrono::steady_clock::now() }; // Startzeitpunkt

		// Vergrößerung
		for (int j = 0; j < elementCount; ++j)
			v.push_back(static_cast<double>(j));

		// Verkleinerung
		for (int k = elementCount - 1; k >= 1; --k)
			v.setSize(k);

		/* ---- HIER ENDET DIE BEFÜLLUNG DES VECTORS ---- */
		const auto end{ std::chrono::steady_clock::now() }; // Endzeitpunkt
		const std::chrono::duration<double> elapsed_seconds{ end - start }; // Zeitdifferenz
		totalDuration += elapsed_seconds;
	}

	std::cout << ">>> Vergroesserung und Verkleinerung des Vector hat "
		<< totalDuration.count() << " Sekunden gedauert!" << std::endl;

#ifdef _DEBUG
	std::cout << "Fuer einen aussagekraeftigeren Test erst auf Release umstellen!" << std::endl;
#endif // _DEBUG
}
