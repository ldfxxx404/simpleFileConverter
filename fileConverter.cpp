/*Simple file converter*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cerr << "Выберите файл для конвертации: " << argv[0] << " <inputFile> <outputFile>" << endl;
        return 1;
    }
     string inputFile = argv[1];
     string outputFile = argv[2];


    std::string command = "ffmpeg -i " + inputFile + " " + outputFile;

    int status = std::system(command.c_str());
    if (status != 0)
    {
        cerr << "\nПроизошла ошибка при конвертации!" << endl;
        return 1;
    } else cout << "\nКонвертация успешно завершена";

    return 0;
}