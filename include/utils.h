/**
 *  @brief Represents a color in the RGB color space.
 */
typedef struct {
    float R;
    float G;
    float B;
} RGB;

/**
 *  @brief Converts a hexadecimal color string to a ColorRGB structure.
 *  
 *  This function takes a hexadecimal color string and converts it into its
 *  corresponding RGB components stored in a ColorRGB structure.
 *
 *  @param hex   The input hexadecimal color string (e.g., "#FFAABB").
 *  @param color Pointer to a ColorRGB structure where the RGB components will
 *               be stored. The structure should be allocated by the caller.
*/
void color_hex_to_RGB(char *hex, RGB *color);