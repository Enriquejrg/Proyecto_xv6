#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  int r = uptime();
  int ticks = r >> 16;
  int nprocs = r & 0xFFFF;

  printf(1, "uptime: %d ticks (%d s), procesos activos: %d\n",
         ticks, ticks/100, nprocs);
  exit();
}
