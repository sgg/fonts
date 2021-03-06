#include <stdint.h>
#include "field8.h"

const uint8_t font_5x7[][7] = {
#ifdef INCLUDE_UNPRINTABLES
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
#endif // INCLUDE_UNPRINTABLES
	{
		________,
		________,
		________,
		________,
		________,
		________,
		________,
	},
	{
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		________,
		_____X__,
	},
	{
		___X___X,
		___X___X,
		___X___X,
		________,
		________,
		________,
		________,
	},
	{
		____X_X_,
		____X_X_,
		___XXXXX,
		____X_X_,
		___XXXXX,
		____X_X_,
		____X_X_,
		________,
	},
	{
		_____X__,
		____XXXX,
		___X_X__,
		____XXX_,
		_____X_X,
		___XXXX_,
		_____X__,
	},
	{
		___XX___,
		___XX__X,
		______X_,
		_____X__,
		____X___,
		___X__XX,
		______XX,
	},
	{
		____XX__,
		___X__X_,
		___X_X__,
		____X___,
		___X_X_X,
		___X__X_,
		____XX_X,
	},
	{
		_____X__,
		_____X__,
		_____X__,
		________,
		________,
		________,
		________,
	},
	{
		_____X__,
		____X___,
		____X___,
		____X___,
		____X___,
		____X___,
		_____X__,
	},
	{
		_____X__,
		______X_,
		______X_,
		______X_,
		______X_,
		______X_,
		_____X__,
	},
	{
		_____X__,
		____XXX_,
		_____X__,
		____X_X_,
		________,
		________,
		________,
	},
	{
		________,
		_____X__,
		_____X__,
		___XXXXX,
		_____X__,
		_____X__,
		________,
	},
	{
		________,
		________,
		________,
		________,
		________,
		______X_,
		_____X__,
	},
	{
		________,
		________,
		________,
		___XXXXX,
		________,
		________,
		________,
	},
	{
		________,
		________,
		________,
		________,
		________,
		________,
		_____X__,
	},
	{
		_______X,
		_______X,
		______X_,
		_____X__,
		____X___,
		___X____,
		___X____,
	},
	{
		____XXX_,
		___X___X,
		___X__XX,
		___X_X_X,
		___XX__X,
		___X___X,
		____XXX_,
	},
	{
		_____X__,
		____XX__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		___XXXXX,
	},
	{
		____XXX_,
		___X___X,
		_______X,
		______X_,
		_____X__,
		____X___,
		___XXXXX,
	},
	{
		____XXX_,
		___X___X,
		_______X,
		_____XX_,
		_______X,
		___X___X,
		____XXX_,
	},
	{
		_______X,
		___X___X,
		___X___X,
		___XXXXX,
		_______X,
		_______X,
		_______X,
	},
	{
		___XXXXX,
		___X____,
		___X____,
		___XXXX_,
		_______X,
		___X___X,
		____XXX_,
	},
	{
		____XXX_,
		___X____,
		___X____,
		___XXXX_,
		___X___X,
		___X___X,
		____XXX_,
	},
	{
		___XXXXX,
		_______X,
		_______X,
		______X_,
		_____X__,
		_____X__,
		_____X__,
	},
	{
		____XXX_,
		___X___X,
		___X___X,
		____XXX_,
		___X___X,
		___X___X,
		____XXX_,
	},
	{
		____XXX_,
		___X___X,
		___X___X,
		____XXXX,
		_______X,
		_______X,
		____XXX_,
	},
	{
		________,
		________,
		____X___,
		________,
		____X___,
		________,
		________,
	},
	{
		________,
		________,
		____X___,
		________,
		____X___,
		___X____,
		________,
	},
	{
		________,
		______X_,
		_____X__,
		____X___,
		_____X__,
		______X_,
		________,
	},
	{
		________,
		________,
		___XXXXX,
		________,
		___XXXXX,
		________,
		________,
	},
	{
		________,
		____X___,
		_____X__,
		______X_,
		_____X__,
		____X___,
		________,
	},
	{
		____XXX_,
		___X___X,
		_______X,
		______X_,
		_____X__,
		________,
		_____X__,
	},
	{
		____XXX_,
		___X___X,
		___X__XX,
		___X_X_X,
		___X__XX,
		___X____,
		____XXX_,
	},
	{
		____XXX_,
		___X___X,
		___X___X,
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
	},
	{
		___XXXX_,
		___X___X,
		___X___X,
		___XXXX_,
		___X___X,
		___X___X,
		___XXXX_,
	},
	{
		____XXX_,
		___X___X,
		___X____,
		___X____,
		___X____,
		___X___X,
		____XXX_,
	},
	{
		___XXXX_,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXX_,
	},
	{
		___XXXXX,
		___X____,
		___X____,
		___XXXX_,
		___X____,
		___X____,
		___XXXXX,
	},
	{
		___XXXXX,
		___X____,
		___X____,
		___XXXX_,
		___X____,
		___X____,
		___X____,
	},
	{
		____XXX_,
		___X____,
		___X____,
		___X__XX,
		___X___X,
		___X___X,
		____XXXX,
	},
	{
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
	},
	{
		___XXXXX,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		___XXXXX,
	},
	{
		_______X,
		_______X,
		_______X,
		_______X,
		_______X,
		___X___X,
		____XXX_,
	},
	{
		___X___X,
		___X__X_,
		___X_X__,
		___XX___,
		___X_X__,
		___X__X_,
		___X___X,
	},
	{
		___X____,
		___X____,
		___X____,
		___X____,
		___X____,
		___X____,
		___XXXXX,
	},
	{
		___X___X,
		___XX_XX,
		___X_X_X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
	},
	{
		___X___X,
		___X___X,
		___XX__X,
		___X_X_X,
		___X__XX,
		___X___X,
		___X___X,
	},
	{
		____XXX_,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		____XXX_,
	},
	{
		___XXXX_,
		___X___X,
		___X___X,
		___XXXX_,
		___X____,
		___X____,
		___X____,
	},
	{
		____XXX_,
		___X___X,
		___X___X,
		___X___X,
		___X_X_X,
		___X__X_,
		____XX_X,
	},
	{
		___XXXX_,
		___X___X,
		___X___X,
		___XXXX_,
		___X_X__,
		___X__X_,
		___X___X,
	},
	{
		____XXX_,
		___X___X,
		___X____,
		____XXX_,
		_______X,
		___X___X,
		____XXX_,
	},
	{
		___XXXXX,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
	},
	{
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		____XXX_,
	},
	{
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		____X_X_,
		_____X__,
	},
	{
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X_X_X,
		___XX_XX,
		___X___X,
	},
	{
		___X___X,
		___X___X,
		____X_X_,
		_____X__,
		____X_X_,
		___X___X,
		___X___X,
	},
	{
		___X___X,
		___X___X,
		____X_X_,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
	},
	{
		___XXXXX,
		_______X,
		______X_,
		_____X__,
		____X___,
		___X____,
		___XXXXX,
	},
	{
		____XXX_,
		____X___,
		____X___,
		____X___,
		____X___,
		____X___,
		____XXX_,
	},
	{
		___X____,
		___X____,
		____X___,
		_____X__,
		______X_,
		_______X,
		_______X,
	},
	{
		____XXX_,
		______X_,
		______X_,
		______X_,
		______X_,
		______X_,
		____XXX_,
	},
	{
		_____X__,
		____X_X_,
		________,
		________,
		________,
		________,
		________,
	},
	{
		________,
		________,
		________,
		________,
		________,
		________,
		___XXXXX,
	},
	{
		_____X__,
		______X_,
		________,
		________,
		________,
		________,
		________,
	},
	{
		________,
		________,
		____XXX_,
		___X___X,
		___X___X,
		___X__XX,
		____XX_X,
	},
	{
		___X____,
		___X____,
		___XXXX_,
		___X___X,
		___X___X,
		___X___X,
		___XXXX_,
	},
	{
		________,
		________,
		____XXXX,
		___X____,
		___X____,
		___X____,
		____XXXX,
	},
	{
		_______X,
		_______X,
		____XXXX,
		___X___X,
		___X___X,
		___X___X,
		____XXXX,
	},
	{
		________,
		________,
		____XXX_,
		___X___X,
		___XXXXX,
		___X____,
		____XXX_,
	},
	{
		______XX,
		_____X__,
		_____X__,
		____XXX_,
		_____X__,
		_____X__,
		_____X__,
	},
	{
		________,
		________,
		____XXXX,
		___X___X,
		____XXXX,
		_______X,
		____XXX_,
	},
	{
		___X____,
		___X____,
		___XXXX_,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
	},
	{
		________,
		_____X__,
		________,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
	},
	{
		________,
		_______X,
		________,
		_______X,
		_______X,
		___X___X,
		____XXX_,
	},
	{
		___X____,
		___X____,
		___X__X_,
		___X_X__,
		___XX___,
		___X_X__,
		___X__X_,
	},
	{
		____XX__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
	},
	{
		________,
		________,
		___XX_X_,
		___X_X_X,
		___X___X,
		___X___X,
		___X___X,
	},
	{
		________,
		________,
		___XXXX_,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
	},
	{
		________,
		________,
		____XXX_,
		___X___X,
		___X___X,
		___X___X,
		____XXX_,
	},
	{
		________,
		________,
		___XXXX_,
		___X___X,
		___XXXX_,
		___X____,
		___X____,
	},
	{
		________,
		________,
		____XXXX,
		___X___X,
		____XXXX,
		_______X,
		_______X,
	},
	{
		________,
		________,
		___X_XX_,
		___XX__X,
		___X____,
		___X____,
		___X____,
	},
	{
		________,
		________,
		____XXXX,
		___X____,
		____XXX_,
		_______X,
		___XXXX_,
	},
	{
		_____X__,
		_____X__,
		____XXX_,
		_____X__,
		_____X__,
		_____X__,
		______X_,
	},
	{
		________,
		________,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		____XXXX,
	},
	{
		________,
		________,
		___X___X,
		___X___X,
		___X___X,
		____X_X_,
		_____X__,
	},
	{
		________,
		________,
		___X___X,
		___X___X,
		___X___X,
		___X_X_X,
		____X_X_,
	},
	{
		________,
		________,
		___X___X,
		____X_X_,
		_____X__,
		____X_X_,
		___X___X,
	},
	{
		________,
		________,
		___X___X,
		___X___X,
		____XXXX,
		_______X,
		____XXX_,
	},
	{
		________,
		________,
		___XXXXX,
		______X_,
		_____X__,
		____X___,
		___XXXXX,
	},
	{
		______X_,
		_____X__,
		_____X__,
		____X___,
		_____X__,
		_____X__,
		______X_,
	},
	{
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
	},
	{
		____X___,
		_____X__,
		_____X__,
		______X_,
		_____X__,
		_____X__,
		____X___,
	},
	{
		________,
		________,
		____X___,
		___X_X_X,
		______X_,
		________,
		________,
	},
#ifdef INCLUDE_UNPRINTABLES
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
	},
#endif // INCLUDE_UNPRINTABLES
};
