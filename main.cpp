#include <iostream>
#include <fstream>
#define Height 256
#define Width 256

int main()
{
    std::ofstream file;
	file.open("xor.ppm");
	file << "P2 256 256 255\n";
	for (int i = 0; i < 256; i++)
		for (int j = 0; j < 256; j++)
			file << (i ^ j) << ' ';
	file.close();


	//int R[Height][Width]={0};
	//int G[Height][Width]={0};
	//int B[Height][Width]={0};

	std::ofstream fiLe1;
	fiLe1.open("RGB.ppm");
	fiLe1 << "P3 256 256 255\n";

    for (int i = 0; i < 256; i++)
		for (int j = 0; j < 256; j++)
        {
            int R = j&255;
            int G = i%255;
            int B = (j*i)%255;

            fiLe1 << R << " " << G << " " << B << std::endl;
        }


	fiLe1.close();

    return 0;
}
