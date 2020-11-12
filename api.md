# rayutils API

### Colors

rayutils add 116 colors to list!

```c
#define OLIVE                   CLITERAL(Color){ 128, 128, 0, 255 }               // Olive
#define SILVER                  CLITERAL(Color){ 192, 192, 192, 255 }             // Silver
#define TEAL                    CLITERAL(Color){ 0, 128, 128, 255 }               // Teal
#define NAVY                    CLITERAL(Color){ 0, 0, 128, 255 }                 // Navy
#define DARKRED                 CLITERAL(Color){ 139, 0, 0, 255 }                 // Dark red
#define FIREBRICK               CLITERAL(Color){ 178, 34, 34, 255 }               // Firebrick
#define CRIMSON                 CLITERAL(Color){ 220, 20, 60, 255 }               // Crimson
#define TOMATO                  CLITERAL(Color){ 255, 99, 71, 255 }               // Tomato
#define CORAL                   CLITERAL(Color){ 255, 127, 80, 255 }              // Coral
#define INDIANRED               CLITERAL(Color){ 205, 92, 92, 255 }               // Indian Red
#define LIGHTCORAL              CLITERAL(Color){ 240, 128, 128, 255 }             // Light Coral
#define DARKSALMON              CLITERAL(Color){ 230, 150, 122, 255 }             // Dark Salmon
#define SALMON                  CLITERAL(Color){ 250, 128, 114, 255 }             // Salmon
#define LIGHTSALMON             CLITERAL(Color){ 255, 160, 122, 255 }             // Light Salmon
#define ORANGERED               CLITERAL(Color){ 255, 69, 0, 255 }                // Orange Red
#define DARKORANGE              CLITERAL(Color){ 255, 140, 0, 255 }               // Dark Orange
#define DARKGOLDENROD           CLITERAL(Color){ 184, 134, 11, 255 }              // Dark Golden Rod
#define GOLDENROD               CLITERAL(Color){ 218, 165, 32, 255 }              // Golden Rod
#define PALEGOLDENROD           CLITERAL(Color){ 238, 232, 170, 255 }             // Pale Golden Rod
#define DARKKHAKI               CLITERAL(Color){ 189, 183, 107, 255 }             // Dark Khaki
#define KHAKI                   CLITERAL(Color){ 240, 230, 140, 255 }             // Khaki
#define YELLOWGREEN             CLITERAL(Color){ 154, 205, 50, 255 }              // Yellow Green
#define DARKOLIVEGREEN          CLITERAL(Color){ 85, 107, 47, 255 }               // Dark Olive Green
#define OLIVEDRAB               CLITERAL(Color){ 107, 142, 35, 255 }              // Olive Drab
#define LAWNGREEN               CLITERAL(Color){ 124, 252, 0, 255 }               // Lawn Green
#define CHARTREUSE              CLITERAL(Color){ 127, 255, 0, 255 }               // Chart Reuse
#define GREENYELLOW             CLITERAL(Color){ 173, 255, 47, 255 }              // Green Yellow
#define FORESTGREEN             CLITERAL(Color){ 34, 139, 34, 255 }               // Forest Green
#define LIMEGREEN               CLITERAL(Color){ 50, 205, 50, 255 }               // Lime Green
#define LIGHTGREEN              CLITERAL(Color){ 144, 238, 144, 255 }             // Light Green
#define PALEGREEN               CLITERAL(Color){ 152, 251, 152, 255 }             // Pale Green
#define DARKSEAGREEN            CLITERAL(Color){ 143, 188, 143, 255 }             // Dark Sea Green
#define MEDIUMSPRINGGREEN       CLITERAL(Color){ 0, 250, 154, 255 }               // Medium Spring Green
#define SPRINGGREEN             CLITERAL(Color){ 0, 255, 127, 255 }               // Spring Green
#define SEAGREEN                CLITERAL(Color){ 46, 139, 87, 255 }               // Sea Green
#define MEDIUMAQUAMARINE        CLITERAL(Color){ 102, 205, 170, 255 }             // Medium Aqua Marine
#define MEDIUMSEAGREEN          CLITERAL(Color){ 60, 179, 113, 255 }              // Medium Sea Green
#define LIGHTSEAGREEN           CLITERAL(Color){ 32, 178, 170, 255 }              // Light Sea Green
#define DARKSLATEGRAY           CLITERAL(Color){ 47, 79, 79, 255 }                // Dark Slate Gray
#define DARKCYAN                CLITERAL(Color){ 0, 139, 139, 255 }               // Dark Cyan
#define AQUA                    CLITERAL(Color){ 0, 255, 255, 255 }               // Aqua
#define CYAN                    CLITERAL(Color){ 0, 255, 255, 255 }               // Cyan
#define LIGHTCYAN               CLITERAL(Color){ 225, 255, 255, 255 }             // Light Cyan
#define DARKTURQUOISE           CLITERAL(Color){ 64, 206, 209, 255 }              // Dark Turquoise
#define TURQUOISE               CLITERAL(Color){ 64, 224, 208, 255 }              // Turquoise
#define MEDIUMTURQUOISE         CLITERAL(Color){ 72, 209, 204, 255 }              // Medium Turquoise
#define PALETURQUOISE           CLITERAL(Color){ 175, 238, 238, 255 }             // Pale Turquoise
#define AQUAMARINE              CLITERAL(Color){ 127, 255, 212, 255 }             // Aqua Marine
#define LIGHTBLUE               CLITERAL(Color){ 255, 182, 193, 255 }             // Light Blue
#define POWDERBLUE              CLITERAL(Color){ 176, 224, 230, 255 }             // Powder Blue
#define CADETBLUE               CLITERAL(Color){ 95, 158, 160, 255 }              // Cadet Blue
#define STEELBLUE               CLITERAL(Color){ 70, 130, 180, 255 }              // Steel Blue
#define CORNFLOWERBLUE          CLITERAL(Color){ 100, 149, 237, 255 }             // Cornflower Blue
#define DEEPSKYBLUE             CLITERAL(Color){ 0, 191, 255, 255 }               // Deep Sky Blue
#define DODGERBLUE              CLITERAL(Color){ 30, 144, 255, 255 }              // Dodger Blue
#define LIGHTSKYBLUE            CLITERAL(Color){ 135, 206, 250, 255 }             // Light Sky Blue
#define MIDNIGHTBLUE            CLITERAL(Color){ 25, 25, 112, 255 }               // Midnight Blue
#define MEDIUMBLUE              CLITERAL(Color){ 0, 0, 205, 255 }                 // Medium Blue
#define ROYALBLUE               CLITERAL(Color){ 65, 105, 225, 255 }              // Royal Blue
#define BLUEVIOLET              CLITERAL(Color){ 138, 43, 226, 255 }              // Blue Violet
#define INDIGO                  CLITERAL(Color){ 75, 0, 130, 255 }                // Indigo
#define DARKSLATEBLUE           CLITERAL(Color){ 72, 61, 139, 255 }               // Dark Slate Blue
#define SLATEBLUE               CLITERAL(Color){ 106, 90, 205, 255 }              // Slate Blue
#define MEDIUMSLATEBLUE         CLITERAL(Color){ 123, 104, 238, 255 }             // Medium Slate Blue
#define MEDIUMPURPLE            CLITERAL(Color){ 147, 112, 219, 255 }             // Medium Purple
#define DARKMAGENTA             CLITERAL(Color){ 139, 0, 139, 255 }               // Dark Magenta
#define DARKVIOLET              CLITERAL(Color){ 148, 0, 211, 255 }               // Dark Violet
#define DARKORCHID              CLITERAL(Color){ 153, 50, 204, 255 }              // Dark Orchid
#define MEDIUMORCHID            CLITERAL(Color){ 186, 85, 211, 255 }              // Medium Orchid
#define THISTLE                 CLITERAL(Color){ 216, 191, 216, 255 }             // Thistle
#define PLUM                    CLITERAL(Color){ 221, 160, 221, 255 }             // Plum
#define FUSCHIA                 CLITERAL(Color){ 255, 0, 255, 255 }               // Fuschia
#define ORCHID                  CLITERAL(Color){ 218, 112, 214, 255 }             // Orchid
#define MEDIUMVIOLETRED         CLITERAL(Color){ 199, 21, 133, 255 }              // Medium Violet Red
#define PALEVIOLETRED           CLITERAL(Color){ 219, 112, 147, 255 }             // Pale Violet Red
#define DEEPPINK                CLITERAL(Color){ 255, 20, 147, 255 }              // Deep Pink
#define HOTPINK                 CLITERAL(Color){ 255, 105, 180, 255 }             // Hot Pink
#define ANTIQUEWHITE            CLITERAL(Color){ 250, 235, 215, 255 }             // Antique White
#define BISQUE                  CLITERAL(Color){ 255, 228, 196, 255 }             // Bisque
#define BLANCHEDALMOND          CLITERAL(Color){ 255, 235, 205, 255 }             // Blanched Almond
#define WHEAT                   CLITERAL(Color){ 245, 222, 179, 255 }             // Wheat
#define CORNSILK                CLITERAL(Color){ 255, 248, 220, 255 }             // Corn Silk
#define LEMONSHIFFON            CLITERAL(Color){ 255, 250, 205, 255 }             // Lemon Shiffon
#define LIGHTGOLDENRODYELLOW    CLITERAL(Color){ 250, 250, 210, 255 }             // Light Golden Rod Yellow
#define LIGHTYELLOW             CLITERAL(Color){ 255, 255, 224, 255 }             // Light Yellow
#define SADDLEBROWN             CLITERAL(Color){ 139, 69, 19, 255 }               // Saddle Brown
#define SIENNA                  CLITERAL(Color){ 160, 82, 45, 255 }               // Sienna
#define CHOCOLATE               CLITERAL(Color){ 210, 105, 30, 255 }              // Chocolate
#define PERU                    CLITERAL(Color){ 205, 133, 63, 255 }              // Peru
#define SANDYBROWN              CLITERAL(Color){ 244, 164, 96, 255 }              // Sandy Brown
#define BURLYWOOD               CLITERAL(Color){ 222, 184, 135, 255 }             // Burly Wood
#define TAN                     CLITERAL(Color){ 210, 180, 140, 255 }             // Tan
#define ROSYBROWN               CLITERAL(Color){ 188, 143, 143, 255 }             // Rosy Brown
#define MOCCASIN                CLITERAL(Color){ 255, 228, 181, 255 }             // Moccasin
#define NAVAJOWHITE             CLITERAL(Color){ 255, 228, 181, 255 }             // Navajo White
#define PEACHPUFF               CLITERAL(Color){ 255, 218, 185, 255 }             // Peach Puff
#define MISTYROSE               CLITERAL(Color){ 255, 228, 225, 255 }             // Misty Rose
#define LAVENDERBLUSH           CLITERAL(Color){ 255, 240, 245, 255 }             // Lavender Blush
#define LINEN                   CLITERAL(Color){ 250, 240, 230, 255 }             // Linen
#define OLDLACE                 CLITERAL(Color){ 253, 245, 230, 255 }             // Old Lace
#define PAPAYAWHIP              CLITERAL(Color){ 255, 239, 213, 255 }             // Papaya Whip
#define SEASHELL                CLITERAL(Color){ 255, 248, 238, 255 }             // Sea Shell
#define MINTCREAM               CLITERAL(Color){ 245, 255, 250, 255 }             // Mint Cream
#define SLATEGRAY               CLITERAL(Color){ 112, 128, 144, 255 }             // Slate Gray
#define LIGHTSLATEGRAY          CLITERAL(Color){ 119, 136, 153, 255 }             // Light Slate Gray
#define LIGHTSTEELBLUE          CLITERAL(Color){ 176, 196, 222, 255 }             // Light Steel Blue
#define LAVENDER                CLITERAL(Color){ 230, 230, 250, 255 }             // Lavender
#define FLORALWHITE             CLITERAL(Color){ 255, 250, 240, 255 }             // Floral White
#define ALICEBLUE               CLITERAL(Color){ 240, 248, 255, 255 }             // Alice Blue
#define GHOSTWHITE              CLITERAL(Color){ 248, 248, 255, 255 }             // Ghost White
#define HONEYDEW                CLITERAL(Color){ 240, 255, 240, 255 }             // Honeydew
#define IVORY                   CLITERAL(Color){ 255, 255, 240, 255 }             // Ivory
#define AZURE                   CLITERAL(Color){ 240, 255, 255, 255 }             // Azure
#define SNOW                    CLITERAL(Color){ 255, 250, 250, 255 }             // Snow 
#define DIMGRAY                 CLITERAL(Color){ 105, 105, 105, 255 }             // Dim Gray
#define GAINSBORO               CLITERAL(Color){ 220, 220, 220, 255 }             // Gainsboro
#define WHITESMOKE              CLITERAL(Color){ 245, 245, 245, 255 }             // White Smoke
```

### Structs

```c
// raylib game struct
typedef struct Game {
    int x;              // Window x position
    int y;              // Window y position
    int width;          // Window width
    int height;         // Window height
    
    const char *title;  // Window title
    int fps;            // Game FPS
    int exitKey;        // Exit key (Defaults to escape)
    Image icon;         // Window icon
    
    bool msaa;          // Enable/Disable MSAA 4X
    bool vsync;         // Enable/Disable VSync
    bool fullscreen;    // Enable/Disable Fullscreen
    bool resizable;     // Enable/Disable Window being resizable
    bool undecorated;   // Enable/Disable Window being undecorated (Defaults to false)
    bool cursor;        // Enable/Disable Cursor
} Game;

// NOTE: The structs below used for drawing via arrays!
// Circle struct
typedef struct Circle {
    int x;          // Center x of circle
    int y;          // Center y of circle
    float radius;   // Circle radius
    Color color;    // Circle color
    bool lines;     // Is circle outlined?
} Circle;

// Line struct
typedef struct Line {
    Vector2 startPos;   // Draw line from Vector2
    Vector2 endPos;     // Draw line to Vector2
    float thick;        // Line thick
    Color color;        // Line color
} Line;

// Triangle struct
typedef struct Triangle {
    Vector2 v1;     // First vector of triangle 
    Vector2 v2;     // Second vector of triangle
    Vector2 v3;     // Third vector of triangle
    Color color;    // Triangle color
    bool lines;     // Is triangle outlined?
} Triangle;

// Ring struct
typedef struct Ring {
    Vector2 center;     // Ring center position
    float innerRadius;  // Ring inner radius
    float outerRadius;  // Ring outer radius
    int startAngle;     // Ring start angle
    int endAngle;       // Ring end angle
    int segments;       // Ring segments
    Color color;        // Ring color
    bool lines;         // Is ring outlined?
} Ring;

// Ellipse struct
typedef struct Ellipse {
    int x;          // Ellipse center x position
    int y;          // Ellipse center y position
    float radiusH;  // Ellipse horizontal radius
    float radiusV;  // Ellipse vertical radius
    Color color;    // Ellipse color
    bool lines;     // Is ellipse outlined?
} Ellipse;

// Cube struct
typedef struct Cube {
    Vector3 position;   // Cube position
    Vector3 size;       // Cube width, height, And length
    Color color;        // Cube color
    bool wires;         // Draw wires (Or fill)?
} Cube;

// Sphere struct
typedef struct Sphere {
    Vector3 position;   // Sphere position
    float radius;       // Sphere radius
    int rings;          // Sphere rings
    int slices;         // Sphere slices
    Color color;        // Sphere color
    bool wires;         // Draw wires (Or fill)?
} Sphere;

// Pixel struct
typedef struct Pixel {
    int x;          // Pixel x position
    int y;          // Pixel y position
    Color color;    // Pixel color
} Pixel;

// Point struct
typedef struct Point {
    Vector3 position;   // Point position
    Color color;        // Point color
} Point;

// Cylinder struct
typedef struct Cylinder {
    Vector3 position;       // Cylinder position
    float radiusTop;        // Cylinder top radius
    float radiusBottom;     // Cylinder bottom radius
    float height;           // Cylinder height
    int slices;             // Cylinder slices
    Color color;            // Cylinder color
    bool wires;             // Draw wires (Or fill)?
} Cylinder;

// Plane struct
typedef struct Plane {
    Vector3 position;   // Plane position
    Vector2 size;       // Plane width and height
    Color color;        // Plane color
} Plane;
```

### module: core

```c
const char *GetOS(void);                                						 // Returns current operating system used
void DownloadFile(const char *src, const char *dir);    					     // Downloads file using curl from link src to folder (path) dir
void Execute(const char *command);                      						 // Executes command via command prompt/terminal
void MapKeyboardControls(Vector2 *position, float velocity);		             // Map player position which is Vector2 to keyboard movement controls (Easy to make player)
void MapGamepadControls(Vector2 *position, float velocity, int gamepad_index);   // Map player position which is Vector2 to gamepad movement controls (Easy to make player)
```

### module: multiples

```c
// This was done to draw multiple things from arrays using for loop
void DrawRectangles(Rectangle *recs, bool *lines, Color *colors, int count);  // Draw rectangles with color and if outlined from array of rectangles and array of colors and array of bools if each rectangle is outlined or no
void DrawCircles(Circle *circles, int count);                                 // Draw circles from array of circle structs
void DrawLines(Line *lines, int count);                                       // Draw lines from array of line structs
void DrawTriangles(Triangle *triangles, int count);                           // Draw triangles from array of triangle structs
void DrawRings(Ring *rings, int count);                                       // Draw rings from array of ring structs
void DrawEllipses(Ellipse *ellipses, int count);                              // Draw ellipses from array of ellipse structs
void DrawCubes(Cube *cubes, int count);                                       // Draw cubes from array of cube structs
void DrawSpheres(Sphere *spheres, int count);                                 // Draw spheres from array of sphere structs
void DrawPixels(Pixel *pixels, int count);                                    // Draw pixels from array of pixel structs
void DrawPoints(Point *points, int count);                                    // Draw points from array of point structs
void DrawRays(Ray *rays, Color *colors, int count);                           // Draw rays with colors from array of rays and array of colors
void DrawGizmos(Vector3 *positions, int count);                               // Draw gizmos from array of Vector3 vectors
void DrawCylinders(Cylinder *cylinders, int count);                           // Draw cylinders from array of cylinder structs
void DrawPlanes(Plane *planes, int count);                                    // Draw planes from array of plane structs
```

### module: shapes

```c
bool CheckCollisionLineLine(Vector2 startPos1, Vector2 endPos1, Vector2 startPos2, Vector2 endPos2);  // Check collision between two lines
bool CheckCollisionLineRec(Vector2 startPos, Vector2 endPos, Rectangle rec);                          // Check collision between line and rectangle
bool CheckCollisionCircleLine(Vector2 center, float radius, Vector2 startPos, Vector2 endPos);        // Check collision between circle and line
bool CheckCollisionCubes(Vector3 position1, Vector3 size1, Vector3 position2, Vector3 size2);         // Check collision between two cubes
```

### module: models

```c
// 3D texts
// NOTE: they are experimental for now (They get buggy sometimes...)
void DrawText3D(const char *text, Vector3 position, Vector3 rotationAxis, float rotationAngle, int fontSize, Color color);                                 							// Draws 2D text in 3D space
void DrawTextEx3D(Font font, const char *text, Vector3 position, Vector3 rotationAxis, float rotationAngle, float fontSize, float spacing, Color tint);   		 					// Draws 2D text with extended parameters in 3D space
void DrawTextCodepoint3D(Font font, int codepoint, Vector3 position, float scale, Vector3 rotationAxis, float rotationAngle, Color tint);                 							// Draws 2D text codepoint in 3D space

// You can draw 2D shapes in 3D space with rotation ;)
void DrawRectangle3D(Vector3 position, Vector2 size, Vector3 rotationAxis, float rotationAngle, Color color);                                             							// Draws 2D rectangle in 3D space
void DrawRectangleStrip3D(Vector3 position, Vector2 size, Vector3 rotationAxis, float rotationAngle, Color color);                                        							// Draws 2D rectangle outline in 3D space
void DrawCircleGradient3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color1, Color color2);                           							// Draws 2D circle gradient in 3D space
void DrawEllipse3D(Vector3 center, float radiusH, float radiusV, Vector3 rotationAxis, float rotationAngle, Color color);                                 							// Draws 2D ellipse in 3D space
void DrawEllipseStrip3D(Vector3 center, float radiusH, float radiusV, Vector3 rotationAxis, float rotationAngle, Color color);                            							// Draws 2D ellipse outline in 3D space
void DrawRectangleGradientEx3D(Vector3 center, Vector2 size, Vector3 rotationAxis, float rotationAngle, Color col1, Color col2, Color col3, Color col4);  							// Draws 2D rectangle gradient with extended parameters in 3D space
void DrawRectangleGradientH3D(Vector3 center, Vector2 size, Vector3 rotationAxis, float rotationAngle, Color color1, Color color2);                       							// Draws 2D rectangle horizontal gradient in 3D space
void DrawRectangleGradientV3D(Vector3 center, Vector2 size, Vector3 rotationAxis, float rotationAngle, Color color1, Color color2);                       							// Draws 2D rectangle vertical gradient in 3D space
void DrawPoly3D(Vector3 center, int sides, float radius, Vector3 rotationAxis, float rotationAngle, Color color);                                         							// Draws 2D polygon in 3D space
void DrawPolyStrip3D(Vector3 center, int sides, float radius, Vector3 rotationAxis, float rotationAngle, Color color);                                    							// Draws 2D polygon outline in 3D space
void DrawCircleFill3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color);                                             			 				// Draws 2D filled circle in 3D space
void DrawCircleStrip3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color);                                             							// Draws 2D circle outline in 3D space
void DrawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Vector3 rotationAxis, float rotationAngle, Color color);                                          							// Draws 2D triangle in 3D space
void DrawTriangleStrip3D(Vector3 v1, Vector3 v2, Vector3 v3, Vector3 rotationAxis, float rotationAngle, Color color);                                     							// Draws 2D triangle outline in 3D space
void DrawLineStrip3D(Vector3 *points, Vector3 rotationAxis, float rotationAngle, int numPoints, Color color);                                             							// Draws 2D line sequents in 3D space
void DrawCircleSector3D(Vector3 center, Vector3 rotationAxis, float rotationAngle, float radius, int startAngle, int endAngle, int segments, Color color);							// Draws sector/part of 2D circle in 3D space
void DrawCircleSectorStrip3D(Vector3 center, Vector3 rotationAxis, float rotationAngle, float radius, int startAngle, int endAngle, int segments, Color color);                     // Draws sector/part outline of 2D circle in 3D space
void DrawRing3D(Vector3 center, Vector3 rotationAxis, float rotationAngle, float innerRadius, float outerRadius, int startAngle, int endAngle, int segments, Color color);          // Draws 2D ring in 3D space
void DrawRingStrip3D(Vector3 center, Vector3 rotationAxis, float rotationAngle, float innerRadius, float outerRadius, int startAngle, int endAngle, int segments, Color color);     // Draws 2D ring outline in 3D space
void DrawGridEx(Vector3 center, Vector3 rotationAxis, float rotationAngle, int slices, float spacing, Color color1, Color color2);                                                  // Draws 3D grid with extended parameters
void DrawTexture3D(Texture2D texture, Vector3 position, Vector3 rotationAxis, float rotationAngle, float scale, Color tint);                                                        // Draws 2D texture in 3D space
void DrawTextureEx3D(Texture2D texture, Vector3 position, Vector3 rotationAxis, float rotationAngle, float scale, Color tint);                                                      // Draws 2D texture in 3D space with extended parameters
void DrawTexturePro3D(Texture2D texture, Rectangle sourceRec, Rectangle destRec, Vector3 origin, Vector3 rotationAxis, float rotationAngle, float posZ, Color tint);                // Draws 2D texture in 3D space with pro parameters
void DrawTextureSuper(Texture2D texture, int posX, int posY, float rotation, float scale, Color tint);                                                                              // Same as DrawTexture but with scale and rotation
```

### module: Game

```c
void InitGame(Game game);                    // Initializes raylib game directly
Game GetDefaultGame(void);                   // Returns default game struct that can used by raylib
void ScaleGame(Game game);                   // Scales game window and graphics...
```

### module: loaders

```c
Image *LoadImages(const char **files, int count);                                     			// Load images from array of images file paths
Texture2D *LoadTextures(const char **files, int count);                               			// Load textures from array of textures file paths
Texture2D *LoadTexturesFromImages(Image *images, int count);                          			// Load textures from array of loaded images
RenderTexture2D *LoadRenderTextures(Vector2 *sizes, int count);                       			// Load render textures from array of widths and heights using Vector2
Font *LoadFonts(const char **files, int count);                                       			// Load fonts from array of fonts file paths
Font *LoadFontsFromImages(Image *images, Color *keys, int *firstChars, int count);    			// Load fonts from loaded images with array of colors as keys and array of integers as first char of each font loaded
Model *LoadModels(const char **files, int count);                                     			// Load models from array of models file paths
Model *LoadModelsFromMeshes(Mesh *meshes, int count);                                 			// Load models from array of loaded meshes
Shader *LoadShaders(const char **files, int count);                                   			// Load shaders from array contains pairs of vertex and fragment shader file paths
Wave *LoadWaves(const char **files, int count);                                      			// Load waves from array of waves file paths
Sound *LoadSounds(const char **files, int count);                                     			// Load sounds from array of sounds file paths
Sound *LoadSoundsFromWaves(Wave *waves, int count);                                   			// Load sounds from array of loaded waves
Music *LoadMusics(const char **files, int count);                                     			// Load music streams from array of musics file paths
```

### module: unloaders

```c
void UnloadImages(Image *images, int count);                                  					// Unload images from array
void UnloadTextures(Texture2D *textures, int count);                          					// Unload textures from array
void UnloadRenderTextures(RenderTexture2D *targets, int count);               					// Unload render textures from array
void UnloadFonts(Font *fonts, int count);                                     					// Unload fonts from array
void UnloadModels(Model *models, int count);                                  					// Unload models from array
void UnloadMeshes(Mesh *meshes, int count);                                   					// Unload meshes from array
void UnloadMaterials(Material *materials, int count);                         					// Unload materials from array
void UnloadModelAnimations(ModelAnimation *animations, int count);            					// Unload model animations from array
void UnloadShaders(Shader *shaders, int count);                               					// Unload shaders from array
void UnloadWaves(Wave *waves, int count);                                     					// Unload waves from array
void UnloadSounds(Sound *sounds, int count);                                  					// Unload sounds from array
void UnloadMusics(Music *musics, int count);                                  					// Unload music streams from array
```

### module: updaters

```c
//----------------------------------------------------------------------------------
// module: updaters
//----------------------------------------------------------------------------------
void UpdateCameras(Camera **cameras, int count);                                                  // Update multiple cameras
void UpdateVrTrackings(Camera **camera, int count);                                               // Update VR trackings of cameras
void UpdateMusics(Music *musics, int count);                                                      // Upsate music streams from array
void UpdateTextures(Texture2D *textures, const void **pixels, int count);                         // Update textures from arrays
void UpdateModelAnimations(Model *models, ModelAnimation *animations, int *frames, int count);    // Update model animations from arrays
void UpdateSounds(Sound *sounds, const void **data, int *samplesCount, int count);                // Update sounds from arrays
void UpdateAudioStreams(AudioStream *streams, const void **data, int *samplesCount, int count);   // Update audio streams from arrays
```
