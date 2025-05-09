#include <stdio.h>

int main(void) {
    char dwarf_sand ='A';
    short int elf_dust = 25;
    int giant_bone = 100;
    unsigned int orc_blood = 200;
    long int dragon_scale = 1000;
    unsigned long int troll_slime = 5000;
    float fairy_dust = 2.5f;
    double magical_water = 65.75;

    // Implicit Conversions
    printf("Implicit Conversions:\n");
    printf("Mix1 (Dwarf Sand \+ Giant Bone) [char to int]: %d\n",dwarf_sand + giant_bone);
    printf("Mix2 (Elf Dust \+ Giant Bone) [short int to int]: %d\n",elf_dust + giant_bone);
    printf("Mix3 (Orc Blood \- Giant Bone) [int to unsigned int]: %d\n",orc_blood - giant_bone);
    printf("Mix4 (Dragon Scale \* Orc Blood) [unsgigned int to long int]: %d\n",dragon_scale * orc_blood);
    printf("Mix5 (Fairy Dust \/ Troll Slime) [unsigned long int to float]: %.4f\n",fairy_dust / troll_slime);
    printf("Mix6 (Magical Water \+ Fairy Dust) [float to double]: %f\n\n",magical_water * fairy_dust);

    //Explicit Conversions
    printf("Explicit Conversions:\n");
    printf("Stone (Fairy Dust to int): %d\n",(int)fairy_dust);
    printf("Scroll (Magical Water to char): %c\n",(char)magical_water);
    printf("Talisman (Giant Bone to unsigned int): %d\n",(unsigned int)giant_bone);

    return 0;
}