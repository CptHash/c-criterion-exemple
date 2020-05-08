/*
** PROJECT, 2020
** Criterion cpp
** File description:
** Test
*/

#include <criterion/criterion.h>
#include "../include/Demo.hpp"


Test (str , returnvalue)
{
    cr_assert (test() == "It's okay !");
}

Test (Reception , creation)
{
    Demo n(32);
    cr_assert (1);
}