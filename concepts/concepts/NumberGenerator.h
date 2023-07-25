#include<random>


class NumberGenerator {
private:
	std::default_random_engine numberGenerator;
	int num;

public:
	NumberGenerator() {}

	long int generate() {
		return numberGenerator();
	}

};