
/*  ev3_tacho.c was generated by yup.py (yupp) 0.7b6
    out of ev3_tacho.yu-c at 2014-10-13 18:08
 *//**
 *  \file  ev3_tacho.c (ev3_tacho.yu-c)
 *  \brief  EV3 tacho-motors.
 *  \author  Vitaly Kravtsov (in4lio@gmail.com)
 *  \copyright  See the LICENSE file.
 */

#define EV3_TACHO_IMPLEMENT

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "modp_numtoa.h"
#include "ev3.h"
#include "ev3_tacho.h"

/**
 *  \addtogroup ev3_tacho
 *  \{
 */

#define PATH_PREF_LEN  34
#define _ID_SPOT  "///"

#define PATH_DUTY_CYCLE  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "duty_cycle"
#define PATH_DUTY_CYCLE_SP  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "duty_cycle_sp"
#define PATH_POLARITY_MODE  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "polarity_mode"
#define PATH_PORT_NAME  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "port_name"
#define PATH_POSITION  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "position"
#define PATH_POSITION_MODE  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "position_mode"
#define PATH_POSITION_SP  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "position_sp"
#define PATH_PULSES_PER_SECOND  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "pulses_per_second"
#define PATH_PULSES_PER_SECOND_SP  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "pulses_per_second_sp"
#define PATH_RAMP_DOWN_SP  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "ramp_down_sp"
#define PATH_RAMP_UP_SP  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "ramp_up_sp"
#define PATH_REGULATION_MODE  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "regulation_mode"
#define PATH_RESET  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "reset"
#define PATH_RUN  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "run"
#define PATH_RUN_MODE  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "run_mode"
#define PATH_SPEED_REGULATION_D  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "speed_regulation_D"
#define PATH_SPEED_REGULATION_I  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "speed_regulation_I"
#define PATH_SPEED_REGULATION_K  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "speed_regulation_K"
#define PATH_SPEED_REGULATION_P  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "speed_regulation_P"
#define PATH_STATE  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "state"
#define PATH_STOP_MODE  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "stop_mode"
#define PATH_STOP_MODES  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "stop_modes"
#define PATH_TIME_SP  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "time_sp"
#define PATH_TYPE  "/sys/class/tacho-motor/tacho-motor" _ID_SPOT "type"

size_t get_tacho_duty_cycle( uint8_t id, int *buf )
{
	char s[] = PATH_DUTY_CYCLE;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_int( s, buf );
}

size_t get_tacho_duty_cycle_sp( uint8_t id, int *buf )
{
	char s[] = PATH_DUTY_CYCLE_SP;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_int( s, buf );
}

size_t set_tacho_duty_cycle_sp( uint8_t id, int value )
{
	char s[] = PATH_DUTY_CYCLE_SP;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_int( s, value );
}

size_t get_tacho_polarity_mode( uint8_t id, char *buf, size_t sz )
{
	char s[] = PATH_POLARITY_MODE;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_char_array( s, buf, sz );
}

size_t get_tacho_port_name( uint8_t id, char *buf, size_t sz )
{
	char s[] = PATH_PORT_NAME;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_char_array( s, buf, sz );
}

size_t get_tacho_position( uint8_t id, int *buf )
{
	char s[] = PATH_POSITION;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_int( s, buf );
}

size_t set_tacho_position( uint8_t id, int value )
{
	char s[] = PATH_POSITION;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_int( s, value );
}

size_t get_tacho_position_mode( uint8_t id, char *buf, size_t sz )
{
	char s[] = PATH_POSITION_MODE;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_char_array( s, buf, sz );
}

size_t set_tacho_position_mode( uint8_t id, char *value )
{
	char s[] = PATH_POSITION_MODE;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_char_array( s, value );
}

size_t get_tacho_position_sp( uint8_t id, int *buf )
{
	char s[] = PATH_POSITION_SP;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_int( s, buf );
}

size_t set_tacho_position_sp( uint8_t id, int value )
{
	char s[] = PATH_POSITION_SP;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_int( s, value );
}

size_t get_tacho_pulses_per_second( uint8_t id, int *buf )
{
	char s[] = PATH_PULSES_PER_SECOND;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_int( s, buf );
}

size_t get_tacho_pulses_per_second_sp( uint8_t id, int *buf )
{
	char s[] = PATH_PULSES_PER_SECOND_SP;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_int( s, buf );
}

size_t set_tacho_pulses_per_second_sp( uint8_t id, int value )
{
	char s[] = PATH_PULSES_PER_SECOND_SP;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_int( s, value );
}

size_t get_tacho_ramp_down_sp( uint8_t id, dword *buf )
{
	char s[] = PATH_RAMP_DOWN_SP;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_dword( s, buf );
}

size_t set_tacho_ramp_down_sp( uint8_t id, dword value )
{
	char s[] = PATH_RAMP_DOWN_SP;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_dword( s, value );
}

size_t get_tacho_ramp_up_sp( uint8_t id, dword *buf )
{
	char s[] = PATH_RAMP_UP_SP;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_dword( s, buf );
}

size_t set_tacho_ramp_up_sp( uint8_t id, dword value )
{
	char s[] = PATH_RAMP_UP_SP;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_dword( s, value );
}

size_t get_tacho_regulation_mode( uint8_t id, char *buf, size_t sz )
{
	char s[] = PATH_REGULATION_MODE;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_char_array( s, buf, sz );
}

size_t set_tacho_regulation_mode( uint8_t id, char *value )
{
	char s[] = PATH_REGULATION_MODE;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_char_array( s, value );
}

size_t set_tacho_reset( uint8_t id, bool value )
{
	char s[] = PATH_RESET;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_bool( s, value );
}

size_t get_tacho_run( uint8_t id, bool *buf )
{
	char s[] = PATH_RUN;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_bool( s, buf );
}

size_t set_tacho_run( uint8_t id, bool value )
{
	char s[] = PATH_RUN;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_bool( s, value );
}

size_t get_tacho_run_mode( uint8_t id, char *buf, size_t sz )
{
	char s[] = PATH_RUN_MODE;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_char_array( s, buf, sz );
}

size_t set_tacho_run_mode( uint8_t id, char *value )
{
	char s[] = PATH_RUN_MODE;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_char_array( s, value );
}

size_t get_tacho_speed_regulation_D( uint8_t id, int *buf )
{
	char s[] = PATH_SPEED_REGULATION_D;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_int( s, buf );
}

size_t set_tacho_speed_regulation_D( uint8_t id, int value )
{
	char s[] = PATH_SPEED_REGULATION_D;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_int( s, value );
}

size_t get_tacho_speed_regulation_I( uint8_t id, int *buf )
{
	char s[] = PATH_SPEED_REGULATION_I;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_int( s, buf );
}

size_t set_tacho_speed_regulation_I( uint8_t id, int value )
{
	char s[] = PATH_SPEED_REGULATION_I;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_int( s, value );
}

size_t get_tacho_speed_regulation_K( uint8_t id, int *buf )
{
	char s[] = PATH_SPEED_REGULATION_K;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_int( s, buf );
}

size_t set_tacho_speed_regulation_K( uint8_t id, int value )
{
	char s[] = PATH_SPEED_REGULATION_K;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_int( s, value );
}

size_t get_tacho_speed_regulation_P( uint8_t id, int *buf )
{
	char s[] = PATH_SPEED_REGULATION_P;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_int( s, buf );
}

size_t set_tacho_speed_regulation_P( uint8_t id, int value )
{
	char s[] = PATH_SPEED_REGULATION_P;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_int( s, value );
}

size_t get_tacho_state( uint8_t id, char *buf, size_t sz )
{
	char s[] = PATH_STATE;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_char_array( s, buf, sz );
}

size_t get_tacho_stop_mode( uint8_t id, char *buf, size_t sz )
{
	char s[] = PATH_STOP_MODE;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_char_array( s, buf, sz );
}

size_t set_tacho_stop_mode( uint8_t id, char *value )
{
	char s[] = PATH_STOP_MODE;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_char_array( s, value );
}

size_t get_tacho_stop_modes( uint8_t id, char *buf, size_t sz )
{
	char s[] = PATH_STOP_MODES;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_char_array( s, buf, sz );
}

size_t get_tacho_time_sp( uint8_t id, dword *buf )
{
	char s[] = PATH_TIME_SP;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_dword( s, buf );
}

size_t set_tacho_time_sp( uint8_t id, dword value )
{
	char s[] = PATH_TIME_SP;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_write_dword( s, value );
}

size_t get_tacho_type( uint8_t id, char *buf, size_t sz )
{
	char s[] = PATH_TYPE;
	*modp_uitoa10( id, s + PATH_PREF_LEN ) = '/';

	return ev3_read_char_array( s, buf, sz );
}

char *ev3_tacho_type( uint8_t type_id )
{
	switch ( type_id ) {
	case 7:
		return "TACHO";
	case 8:
		return "MINITACHO";

	}
	return "";
}

int ev3_tacho_port( uint8_t type_id )
{
	int i;

	for ( i = 0; i < OUTPUT__COUNT_; i++ ) {
		if ( ev3_tacho[ i ].connected && ( ev3_tacho[ i ].type_id == type_id )) return ( i );
	}
	return ( EV3_NONE );
}

EV3_TACHO *ev3_get_tacho( uint8_t port )
{
	return ( ev3_tacho + (( port < OUTPUT__COUNT_ ) ? port : 0 ));
}

bool ev3_get_tacho_connected( uint8_t port )
{
	return ( ev3_tacho[( port < OUTPUT__COUNT_ ) ? port : 0 ].connected );
}

uint32_t ev3_get_tacho_id( uint8_t port )
{
	return ( ev3_tacho[( port < OUTPUT__COUNT_ ) ? port : 0 ].id );
}

uint32_t ev3_get_tacho_type_id( uint8_t port )
{
	return ( ev3_tacho[( port < OUTPUT__COUNT_ ) ? port : 0 ].type_id );
}

static bool get_str_suffix( const char *prefix, char *s, uint32_t *buf )
{
	char *end;
	uint32_t l = strlen( prefix );

	if ( memcmp( s, prefix, l )) return ( false );
	*buf = strtoul( s + l, &end, 0 );
	if ( *end ) return ( false );

	return ( true );
}

int ev3_tacho_init( void )
{
	char list[ 256 ], s[ 256 ];
	char *p;
	uint32_t id;
	int port;
	uint8_t cnt = 0;

	memset( ev3_tacho, 0, sizeof( ev3_tacho ));

	if ( !ev3_listdir( "/sys/class/tacho-motor", list, sizeof( list ))) return ( EV3_NONE );

	p = strtok( list, " " );
	while ( p ) {
		if ( get_str_suffix( "tacho-motor", p, &id )) {
			if ( get_tacho_port_name( id, s, sizeof( s ))) {
				if ( strcmp( s, "out""A") == 0 ) port = OUTPUT_A;
				else
				if ( strcmp( s, "out""B") == 0 ) port = OUTPUT_B;
				else
				if ( strcmp( s, "out""C") == 0 ) port = OUTPUT_C;
				else
				if ( strcmp( s, "out""D") == 0 ) port = OUTPUT_D;
				else

					port = EV3_NONE;

				if ( port != EV3_NONE ) {
					ev3_tacho[ port ].connected = true;
					ev3_tacho[ port ].id = id;
					get_tacho_type( id, s, sizeof( s ));
					if ( strcmp( s, "tacho") == 0 ) ev3_tacho[ port ].type_id = 7;
					else
					if ( strcmp( s, "minitacho") == 0 ) ev3_tacho[ port ].type_id = 8;
					else

						ev3_tacho[ port ].type_id = 0;

					cnt++;
				}
			}
		}
		p = strtok( NULL, " " );
	}
	return ( cnt );
}

/** \} */
