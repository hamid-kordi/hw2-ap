#include "client.h"

void Client::fill() const
{
    for (size_t i {}; i < N; i++)
        arr[i] = i;
}