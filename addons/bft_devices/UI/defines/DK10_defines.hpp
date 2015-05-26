// Map position within background, pixel based
#define DK10_MAP_X (257)
#define DK10_MAP_Y (491)
#define DK10_MAP_W (1341)
#define DK10_MAP_H (993)

// Height of header and footer OSD elements
#define DK10_OSD_HEADER_H (42)
#define DK10_OSD_FOOTER_H (0)

// Screen content (the stuff that changes, so map area - header and footer)
#define DK10_SCREEN_CONTENT_X (DK10_MAP_X)
#define DK10_SCREEN_CONTENT_Y (DK10_MAP_Y + DK10_OSD_HEADER_H)
#define DK10_SCREEN_CONTENT_W (DK10_MAP_W)
#define DK10_SCREEN_CONTENT_H (DK10_MAP_H - DK10_OSD_HEADER_H - DK10_OSD_FOOTER_H)

// Task bar absolute size, pixel based (from source)
#define DK10_TASKBAR_PX_W (1024)
#define DK10_TASKBAR_PX_H (28)

// Translate task bar size to pixel based size in background
#define DK10_TASKBAR_W (DK10_MAP_W)
#define DK10_TASKBAR_H (DK10_TASKBAR_W / DK10_TASKBAR_PX_W * DK10_TASKBAR_PX_H)

// Set task bar position at the bottom of the screen area
#define DK10_TASKBAR_X (DK10_MAP_X)
#define DK10_TASKBAR_Y (DK10_MAP_Y + DK10_MAP_H - DK10_TASKBAR_H)

// Window background (application windows) absolute size, pixel based (from source)
#define DK10_WINDOW_BACK_PX_W (293)
#define DK10_WINDOW_BACK_PX_H (272)

// Window content (application windows) position within window background, pixel based
#define DK10_WINDOW_CONTENT_PX_X (9)
#define DK10_WINDOW_CONTENT_PX_Y (30)
#define DK10_WINDOW_CONTENT_PX_W (276)
#define DK10_WINDOW_CONTENT_PX_H (232)

// Translate window background size to pixel based position in background (heith is 49 % of tablet screen height)
#define DK10_WINDOW_BACK_H ((DK10_SCREEN_CONTENT_H - DK10_TASKBAR_H) * 0.49)
#define DK10_WINDOW_BACK_W (DK10_WINDOW_BACK_PX_W / DK10_WINDOW_BACK_PX_H * DK10_WINDOW_BACK_H)

// Translate window content size to pixel based position in background
#define DK10_WINDOW_CONTENT_W (DK10_WINDOW_CONTENT_PX_W / DK10_WINDOW_BACK_PX_W * DK10_WINDOW_BACK_W)
#define DK10_WINDOW_CONTENT_H (DK10_WINDOW_CONTENT_PX_H / DK10_WINDOW_BACK_PX_H * DK10_WINDOW_BACK_H)

// Translate window content offsets (from edges of window background) to pixel based positions in background
#define DK10_WINDOW_CONTENT_OFFSET_X (DK10_WINDOW_CONTENT_PX_X / DK10_WINDOW_BACK_PX_W * DK10_WINDOW_BACK_W)
#define DK10_WINDOW_CONTENT_OFFSET_Y (DK10_WINDOW_CONTENT_PX_Y / DK10_WINDOW_BACK_PX_H * DK10_WINDOW_BACK_H)

// Distribute window backgrounds evenly on the available screen space for 2x2 windows
#define DK10_WINDOW_BACK_L_X (DK10_SCREEN_CONTENT_X + (DK10_SCREEN_CONTENT_W - 2 * DK10_WINDOW_BACK_W) / 3)
#define DK10_WINDOW_BACK_R_X (DK10_SCREEN_CONTENT_X + DK10_WINDOW_BACK_W + (DK10_SCREEN_CONTENT_W - 2 * DK10_WINDOW_BACK_W) / 3 * 2)
#define DK10_WINDOW_BACK_T_Y (DK10_SCREEN_CONTENT_Y + (DK10_SCREEN_CONTENT_H - DK10_TASKBAR_H - 2 * DK10_WINDOW_BACK_H) / 3)
#define DK10_WINDOW_BACK_B_Y (DK10_SCREEN_CONTENT_Y + DK10_WINDOW_BACK_H + (DK10_SCREEN_CONTENT_H - DK10_TASKBAR_H - 2 * DK10_WINDOW_BACK_H) / 3 * 2)

// Place window content within window background
#define DK10_WINDOW_CONTENT_L_X (DK10_WINDOW_BACK_L_X + DK10_WINDOW_CONTENT_OFFSET_X)
#define DK10_WINDOW_CONTENT_R_X (DK10_WINDOW_BACK_R_X + DK10_WINDOW_CONTENT_OFFSET_X)
#define DK10_WINDOW_CONTENT_T_Y (DK10_WINDOW_BACK_T_Y + DK10_WINDOW_CONTENT_OFFSET_Y)
#define DK10_WINDOW_CONTENT_B_Y (DK10_WINDOW_BACK_B_Y + DK10_WINDOW_CONTENT_OFFSET_Y)

// Desktop icon size and offset from tablet screen edge in pixels
#define DK10_DESKTOP_ICON_OFFSET_X (25)
#define DK10_DESKTOP_ICON_OFFSET_Y (25)
#define DK10_DESKTOP_ICON_W (100)
#define DK10_DESKTOP_ICON_H (100)

// Message element positions in pixels
#define DK10_MESSAGE_MARGIN_OUTER (20)
#define DK10_MESSAGE_MARGIN_INNER (10)

#define DK10_MESSAGE_BUTTON_W (150)
#define DK10_MESSAGE_BUTTON_H (50)

#define DK10_MESSAGE_MESSAGETEXT_FRAME_X (DK10_SCREEN_CONTENT_X + DK10_MESSAGE_MARGIN_OUTER)
#define DK10_MESSAGE_MESSAGETEXT_FRAME_Y (DK10_SCREEN_CONTENT_Y + DK10_MESSAGE_MARGIN_INNER)
#define DK10_MESSAGE_MESSAGETEXT_FRAME_W (DK10_SCREEN_CONTENT_W - DK10_MESSAGE_MARGIN_OUTER * 2)
#define DK10_MESSAGE_MESSAGETEXT_FRAME_H ((DK10_SCREEN_CONTENT_H - DK10_TASKBAR_H - DK10_MESSAGE_MARGIN_INNER * 3) / 2)

#define DK10_MESSAGE_MESSAGELIST_X (DK10_MESSAGE_MESSAGETEXT_FRAME_X + DK10_MESSAGE_MARGIN_INNER)
#define DK10_MESSAGE_MESSAGELIST_Y (DK10_MESSAGE_MESSAGETEXT_FRAME_Y + DK10_MESSAGE_MARGIN_OUTER)
#define DK10_MESSAGE_MESSAGELIST_W ((DK10_MESSAGE_MESSAGETEXT_FRAME_W - DK10_MESSAGE_MARGIN_INNER * 3) / 3)
#define DK10_MESSAGE_MESSAGELIST_H (DK10_MESSAGE_MESSAGETEXT_FRAME_H - DK10_MESSAGE_MARGIN_INNER - DK10_MESSAGE_MARGIN_OUTER)

#define DK10_MESSAGE_MESSAGETEXT_X (DK10_MESSAGE_MESSAGELIST_X + DK10_MESSAGE_MESSAGELIST_W + DK10_MESSAGE_MARGIN_INNER)
#define DK10_MESSAGE_MESSAGETEXT_Y (DK10_MESSAGE_MESSAGELIST_Y)
#define DK10_MESSAGE_MESSAGETEXT_W (DK10_MESSAGE_MESSAGELIST_W * 2)
#define DK10_MESSAGE_MESSAGETEXT_H (DK10_MESSAGE_MESSAGELIST_H - DK10_MESSAGE_MARGIN_INNER - DK10_MESSAGE_BUTTON_H)

#define DK10_MESSAGE_COMPOSE_FRAME_X (DK10_MESSAGE_MESSAGETEXT_FRAME_X)
#define DK10_MESSAGE_COMPOSE_FRAME_Y (DK10_MESSAGE_MESSAGETEXT_FRAME_Y + DK10_MESSAGE_MESSAGETEXT_FRAME_H + DK10_MESSAGE_MARGIN_INNER)
#define DK10_MESSAGE_COMPOSE_FRAME_W (DK10_MESSAGE_MESSAGETEXT_FRAME_W)
#define DK10_MESSAGE_COMPOSE_FRAME_H (DK10_MESSAGE_MESSAGETEXT_FRAME_H)

#define DK10_MESSAGE_PLAYERLIST_X (DK10_MESSAGE_MESSAGELIST_X)
#define DK10_MESSAGE_PLAYERLIST_Y (DK10_MESSAGE_COMPOSE_FRAME_Y + DK10_MESSAGE_MARGIN_OUTER)
#define DK10_MESSAGE_PLAYERLIST_W (DK10_MESSAGE_MESSAGELIST_W)
#define DK10_MESSAGE_PLAYERLIST_H (DK10_MESSAGE_MESSAGELIST_H)

#define DK10_MESSAGE_COMPOSE_TEXT_X (DK10_MESSAGE_MESSAGETEXT_X)
#define DK10_MESSAGE_COMPOSE_TEXT_Y (DK10_MESSAGE_PLAYERLIST_Y)
#define DK10_MESSAGE_COMPOSE_TEXT_W (DK10_MESSAGE_MESSAGETEXT_W)
#define DK10_MESSAGE_COMPOSE_TEXT_H (DK10_MESSAGE_MESSAGETEXT_H)

#define DK10_MESSAGE_BUTTON_SEND_X (DK10_MESSAGE_COMPOSE_FRAME_X + DK10_MESSAGE_COMPOSE_FRAME_W - DK10_MESSAGE_MARGIN_INNER - DK10_MESSAGE_BUTTON_W)
#define DK10_MESSAGE_BUTTON_SEND_Y (DK10_MESSAGE_COMPOSE_TEXT_Y + DK10_MESSAGE_COMPOSE_TEXT_H + DK10_MESSAGE_MARGIN_INNER)

#define DK10_MESSAGE_BUTTON_DELETE_X (DK10_MESSAGE_BUTTON_SEND_X)
#define DK10_MESSAGE_BUTTON_DELETE_Y (DK10_MESSAGE_MESSAGETEXT_Y + DK10_MESSAGE_MESSAGETEXT_H + DK10_MESSAGE_MARGIN_INNER)

// On-screen edge positions (left, right, top, bottom)
#define DK10_OSD_MARGIN (10)
#define DK10_OSD_EDGE_L (DK10_OSD_MARGIN + DK10_SCREEN_CONTENT_X)
#define DK10_OSD_EDGE_R (-DK10_OSD_MARGIN + DK10_SCREEN_CONTENT_X + DK10_SCREEN_CONTENT_W)
#define DK10_OSD_EDGE_T (DK10_OSD_MARGIN + DK10_SCREEN_CONTENT_Y)
#define DK10_OSD_EDGE_B (-DK10_OSD_FOOTER_H + DK10_MAP_Y + DK10_MAP_H)

// On-screen element base width and height
#define DK10_OSD_ELEMENT_STD_W ((DK10_SCREEN_CONTENT_W - DK10_OSD_MARGIN * 8) / 7)
#define DK10_OSD_ELEMENT_STD_H (DK10_OSD_HEADER_H - DK10_OSD_MARGIN)

// On-screen element X-coord for left, center and right elements
#define DK10_OSD_LEFT_X (DK10_OSD_EDGE_L)
#define DK10_OSD_CENTER_X (DK10_OSD_EDGE_L + DK10_OSD_MARGIN + DK10_OSD_ELEMENT_STD_W)
#define DK10_OSD_RIGHT_X (DK10_OSD_EDGE_R - DK10_OSD_ELEMENT_STD_W)

// On-screen element X-coord for left, center and right elements
#define DK10_OSD_X(ITEM) (DK10_OSD_EDGE_L + (DK10_OSD_MARGIN + DK10_OSD_ELEMENT_STD_W) * (ITEM - 1))

// On-screen text sizes, hight in pixels
// Standard text elements
#define DK10_OSD_TEXT_STD_SIZE (27)
#define DK10_OSD_ICON_STD_SIZE (35)

// On-screen map centre cursor
#define DK10_CURSOR (32)