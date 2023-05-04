English version:

This code demonstrates the use of inheritance and polymorphism in C++ in the context of a "Virtual Pet" game.

The base class VirtualPet represents a general virtual pet with basic attributes and methods. The Dog and Cat classes inherit from the VirtualPet class, allowing customization of the feed and play methods for different types of pets.

The main part of the code demonstrates how we can use unique_ptr pointers to store and manipulate Dog and Cat class objects, using the methods of the base VirtualPet class.

After creating Dog and Cat class objects, the program feeds and plays with the pets, and then displays their names, happiness levels, and hunger levels.



Wersja polska:
Ten kod jest przykładem zastosowania dziedziczenia i polimorfizmu w C++ w ramach gry "Zwierzak domowy".

Klasa bazowa VirtualPet reprezentuje ogólny zwierzak domowy z podstawowymi atrybutami i metodami.

Klasa Dog (Pies) i Cat (Kot) dziedziczą po klasie VirtualPet, co pozwala na dostosowanie metod karmienia i zabawy do różnych zwierząt.

Główna część kodu demonstruje, jak możemy użyć wskaźników typu unique_ptr, aby przechowywać i manipulować obiektami klas Dog i Cat, korzystając z metod klasy bazowej VirtualPet.

Po utworzeniu obiektów klasy Dog i Cat, program karmi i bawi się zwierzakami, a następnie wyświetla ich imiona, poziom szczęścia i głodu.
