#pragma once
class Sun
{
	static Sun *pSun;
private:
	Sun();
public:
	~Sun();
	static Sun &getInstance() {
		if (pSun == nullptr) {
			pSun = new Sun();
		}
		return *pSun;
	}

	void shine()
	{
		std::cout << "Sunlight" << std::endl;
	}
};

