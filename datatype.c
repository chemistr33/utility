#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int main(){
  printf( "###########################\n");
  printf( "#       data_types        #\n"                                 );
  printf( "# Type              Bytes #\n"                             );
  printf( "###########################\n");
  printf( "| char*                %lu  |\n" , sizeof( char* )               );
  printf( "| char                 %lu  |\n" , sizeof( char )               );
  printf( "| int8_t               %lu  |\n" , sizeof( int8_t )             );
  printf( "| unsigned char        %lu  |\n" , sizeof( unsigned char )      );
  printf( "| uint8_t              %lu  |\n" , sizeof( uint8_t )            );
  printf( "| short                %lu  |\n" , sizeof( short )              );
  printf( "| int16_t              %lu  |\n" , sizeof( int16_t )            );
  printf( "| uint16t              %lu  |\n" , sizeof( uint16_t )           );
  printf( "| int                  %lu  |\n" , sizeof( int )                );
  printf( "| unsigned             %lu  |\n" , sizeof( unsigned )           );
  printf( "| long                 %lu  |\n" , sizeof( long )               );
  printf( "| unsigned long        %lu  |\n" , sizeof( unsigned long )      );
  printf( "| int32_t              %lu  |\n" , sizeof( int32_t )            );
  printf( "| uint32_t             %lu  |\n" , sizeof( uint32_t )           );
  printf( "| long long            %lu  |\n" , sizeof( long long )          );
  printf( "| int64_t              %lu  |\n" , sizeof( int64_t )            );
  printf( "| unsigned long long   %lu  |\n" , sizeof( unsigned long long ) );
  printf( "| uint64_t             %lu  |\n" , sizeof( uint64_t )           );
  printf( "| float                %lu  |\n" , sizeof( float )              );
  printf( "| double               %lu  |\n" , sizeof( double )             );
  printf( "| long double          %lu |\n" , sizeof( long double )        );
  printf( "| _Bool                %lu  |\n" , sizeof( _Bool )              );
  printf( "| __________  ___________ |\n");
  printf( "\\/          \\/           \\/\n");
  printf( "\n" );
return 0;
}
