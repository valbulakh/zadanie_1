#include "printer/printer.h"

int main()
{
    //fcfvybuhnjnh
    Printing::Printer printer;

    printer.print(" Hello Word! ");
    std::cerr << " принтеров создано: " << Printing::Printer::getCountCreatedPrinters() << std::endl;

    Printing::Printer* ptrToprinter = nullptr;

    ptrToprinter = new Printing::Printer();
    //vtgvbuhbnjk

    std::cerr << " принтеров создано: " << Printing::Printer::getCountCreatedPrinters() << std::endl;

    delete ptrToprinter;

    std::cerr << " принтеров создано: " << Printing::Printer::getCountCreatedPrinters() << std::endl;

	return 0;
}
