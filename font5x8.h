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
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		________,
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
		________,
	},
	{
		___X__X_,
		___X__X_,
		___X__X_,
		________,
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
		________,
	},
	{
		___XX___,
		___XX__X,
		______X_,
		_____X__,
		____X___,
		___X__XX,
		______XX,
		________,
	},
	{
		____XX__,
		___X__X_,
		___X_X__,
		____X___,
		___X_X_X,
		___X__X_,
		____XX_X,
		________,
	},
	{
		____XX__,
		_____X__,
		____X___,
		________,
		________,
		________,
		________,
		________,
	},
	{
		_____X__,
		____X___,
		___X____,
		___X____,
		___X____,
		____X___,
		_____X__,
		________,
	},
	{
		_____X__,
		______X_,
		_______X,
		_______X,
		_______X,
		______X_,
		_____X__,
		________,
	},
	{
		________,
		________,
		_____X__,
		___X_X_X,
		____XXX_,
		___X_X_X,
		_____X__,
		________,
	},
	{
		________,
		________,
		_____X__,
		_____X__,
		___XXXXX,
		_____X__,
		_____X__,
		________,
		________,
	},
	{
		________,
		________,
		________,
		________,
		________,
		_____XX_,
		______X_,
		_____X__,
	},
	{
		________,
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
		____XX__,
		____XX__,
		________,
	},
	{
		_______X,
		_______X,
		______X_,
		_____X__,
		____X___,
		___X____,
		___X____,
		________,
	},
	{
		____XXX_,
		___X___X,
		___X__XX,
		___X_X_X,
		___XX__X,
		___X___X,
		____XXX_,
		________,
	},
	{
		_____X__,
		____XX__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		___XXXXX,
		________,
	},
	{
		____XXX_,
		___X___X,
		_______X,
		______X_,
		_____X__,
		____X___,
		___XXXXX,
		________,
	},
	{
		____XXX_,
		___X___X,
		_______X,
		_____XX_,
		_______X,
		___X___X,
		____XXX_,
		________,
	},
	{
		______X_,
		_____XX_,
		____X_X_,
		___X__X_,
		___XXXXX,
		______X_,
		______X_,
		________,
	},
	{
		___XXXXX,
		___X____,
		___X____,
		___XXXX_,
		_______X,
		___X___X,
		____XXX_,
		________,
	},
	{
		____XXX_,
		___X____,
		___X____,
		___XXXX_,
		___X___X,
		___X___X,
		____XXX_,
		________,
	},
	{
		___XXXXX,
		_______X,
		_______X,
		______X_,
		_____X__,
		_____X__,
		_____X__,
		________,
	},
	{
		____XXX_,
		___X___X,
		___X___X,
		____XXX_,
		___X___X,
		___X___X,
		____XXX_,
		________,
	},
	{
		____XXX_,
		___X___X,
		___X___X,
		____XXXX,
		_______X,
		_______X,
		____XXX_,
		________,
	},
	{
		________,
		________,
		____XX__,
		____XX__,
		________,
		____XX__,
		____XX__,
		________,
	},
	{
		________,
		________,
		____XX__,
		____XX__,
		________,
		____XX__,
		_____X__,
		____X___,
	},
	{
		_______X,
		______X_,
		_____X__,
		____X___,
		_____X__,
		______X_,
		_______X,
		________,
	},
	{
		________,
		________,
		________,
		___XXXXX,
		________,
		___XXXXX,
		________,
		________,
	},
	{
		___X____,
		____X___,
		_____X__,
		______X_,
		_____X__,
		____X___,
		___X____,
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
		________,
	},
	{
		____XXX_,
		___X___X,
		___X__XX,
		___X_X_X,
		___X__XX,
		___X____,
		____XXX_,
		________,
	},
	{
		____XXX_,
		___X___X,
		___X___X,
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		________,
	},
	{
		___XXXX_,
		___X___X,
		___X___X,
		___XXXX_,
		___X___X,
		___X___X,
		___XXXX_,
		________,
	},
	{
		____XXX_,
		___X___X,
		___X____,
		___X____,
		___X____,
		___X___X,
		____XXX_,
		________,
	},
	{
		___XXXX_,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___XXXX_,
		________,
	},
	{
		___XXXXX,
		___X____,
		___X____,
		___XXXX_,
		___X____,
		___X____,
		___XXXXX,
		________,
	},
	{
		___XXXXX,
		___X____,
		___X____,
		___XXXX_,
		___X____,
		___X____,
		___X____,
		________,
	},
	{
		____XXX_,
		___X____,
		___X____,
		___X__XX,
		___X___X,
		___X___X,
		____XXXX,
		________,
	},
	{
		___X___X,
		___X___X,
		___X___X,
		___XXXXX,
		___X___X,
		___X___X,
		___X___X,
		________,
	},
	{
		___XXXXX,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		___XXXXX,
		________,
	},
	{
		_______X,
		_______X,
		_______X,
		_______X,
		_______X,
		___X___X,
		____XXX_,
		________,
	},
	{
		___X___X,
		___X__X_,
		___X_X__,
		___XX___,
		___X_X__,
		___X__X_,
		___X___X,
		________,
	},
	{
		___X____,
		___X____,
		___X____,
		___X____,
		___X____,
		___X____,
		___XXXXX,
		________,
	},
	{
		___X___X,
		___XX_XX,
		___X_X_X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		________,
	},
	{
		___X___X,
		___X___X,
		___XX__X,
		___X_X_X,
		___X__XX,
		___X___X,
		___X___X,
		________,
	},
	{
		____XXX_,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		____XXX_,
		________,
	},
	{
		___XXXX_,
		___X___X,
		___X___X,
		___XXXX_,
		___X____,
		___X____,
		___X____,
		________,
	},
	{
		____XXX_,
		___X___X,
		___X___X,
		___X___X,
		___X_X_X,
		___X__X_,
		____XX_X,
		________,
	},
	{
		___XXXX_,
		___X___X,
		___X___X,
		___XXXX_,
		___X_X__,
		___X__X_,
		___X___X,
		________,
	},
	{
		____XXX_,
		___X___X,
		___X____,
		____XXX_,
		_______X,
		___X___X,
		____XXX_,
		________,
	},
	{
		___XXXXX,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		________,
	},
	{
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		____XXX_,
		________,
	},
	{
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		____X_X_,
		_____X__,
		________,
	},
	{
		___X___X,
		___X___X,
		___X___X,
		___X_X_X,
		___X_X_X,
		___X_X_X,
		____X_X_,
		________,
	},
	{
		___X___X,
		___X___X,
		____X_X_,
		_____X__,
		____X_X_,
		___X___X,
		___X___X,
		________,
	},
	{
		___X___X,
		___X___X,
		___X___X,
		____X_X_,
		_____X__,
		_____X__,
		_____X__,
		________,
	},
	{
		___XXXXX,
		_______X,
		______X_,
		_____X__,
		____X___,
		___X____,
		___XXXXX,
		________,
	},
	{
		____XXX_,
		____X___,
		____X___,
		____X___,
		____X___,
		____X___,
		____XXX_,
		________,
	},
	{
		___X____,
		___X____,
		____X___,
		_____X__,
		______X_,
		_______X,
		_______X,
		________,
	},
	{
		___XXX__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		___XXX__,
		________,
	},
	{
		_____X__,
		____X_X_,
		___X___X,
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
		________,
	},
	{
		____X__,
		_____X_,
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
		_______X,
		____XXXX,
		___X___X,
		____XXXX,
		________,
	},
	{
		___X____,
		___X____,
		___X____,
		___XXXX_,
		___X___X,
		___X___X,
		___XXXX_,
		________,
	},
	{
		________,
		________,
		____XXXX,
		___X____,
		___X____,
		___X____,
		____XXXX,
		________,
	},
	{
		_______X,
		_______X,
		_______X,
		____XXXX,
		___X___X,
		___X___X,
		____XXXX,
		________,
	},
	{
		________,
		________,
		____XXX_,
		___X___X,
		___XXXXX,
		___X____,
		____XXX_,
		________,
	},
	{
		_____XX_,
		____X__X,
		____X___,
		___XXX__,
		____X___,
		____X___,
		____X___,
		________,
	},
	{
		________,
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
		___X_XX,
		___XX__X,
		___X___X,
		___X___X,
		___X___X,
		________,
	},
	{
		________,
		_____X__,
		________,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		________,
	},
	{
		________,
		_______X,
		________,
		______XX,
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
		________,
	},
	{
		____XX__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		________,
	},
	{
		________,
		________,
		___XX_X_,
		___X_X_X,
		___X_X_X,
		___X___X,
		___X___X,
		________,
	},
	{
		________,
		________,
		___XXXX_,
		___X___X,
		___X___X,
		___X___X,
		___X___X,
		________,
	},
	{
		________,
		________,
		____XXX_,
		___X___X,
		___X___X,
		___X___X,
		____XXX_,
		________,
	},
	{
		________,
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
		________,
		____XX_X,
		___X__XX,
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
		________,
	},
	{
		________,
		________,
		____XXXX,
		___X____,
		____XXX_,
		_______X,
		___XXXX_,
		________,
	},
	{
		_____X__,
		_____X__,
		___XXXXX,
		_____X__,
		_____X__,
		_____X_X,
		______X_,
		________,
	},
	{
		________,
		________,
		___X___X,
		___X___X,
		___X___X,
		___X__XX,
		____XX_X,
		________,
	},
	{
		________,
		________,
		___X___X,
		___X___X,
		___X___X,
		____X_X_,
		_____X__,
		________,
	},
	{
		________,
		________,
		___X___X,
		___X___X,
		___X___X,
		___X_X_X,
		____X_X_,
		________,
	},
	{
		________,
		________,
		___X___X,
		____X_X_,
		_____X__,
		____X_X_,
		___X___X,
		________,
	},
	{
		________,
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
		________,
	},
	{
		______X_,
		_____X__,
		_____X__,
		____X___,
		_____X__,
		_____X__,
		______X_,
		________,
	},
	{
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		_____X__,
		________,
	},
	{
		____X___,
		_____X__,
		_____X__,
		______X_,
		_____X__,
		_____X__,
		____X___,
		________,
	},
	{
		________,
		________,
		________,
		____XX_X,
		___X__X_,
		________,
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
		________,
	},
#endif // INCLUDE_UNPRINTABLES
};
