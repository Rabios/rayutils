// Written by Rabia Alhaffar in 5/November/2020
// rayutils, Single-Header Additional functions for raylib game programming library!
// Updated: 5/June/2021
#ifdef RAYLIB_H

#ifndef RAYUTILS_H
#define RAYUTILS_H

//----------------------------------------------------------------------------------
// Colors (+116 colors)
//----------------------------------------------------------------------------------
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

//----------------------------------------------------------------------------------
// Structs
//----------------------------------------------------------------------------------
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

//----------------------------------------------------------------------------------
// Functions definition
//----------------------------------------------------------------------------------

//----------------------------------------------------------------------------------
// module: core
//----------------------------------------------------------------------------------
RLAPI void DownloadFile(const char *src, const char *dir);                           // Downloads file using curl from link src to folder (path) dir
RLAPI void Execute(const char *command);                                             // Executes command via command prompt/terminal

//----------------------------------------------------------------------------------
// module: multiples
//----------------------------------------------------------------------------------
// This was done to draw multiple things from arrays using for loop
RLAPI void DrawRectangles(Rectangle *recs, bool *lines, Color *colors, int count);  // Draw rectangles with color and if outlined from array of rectangles and array of colors and array of bools if each rectangle is outlined or no
RLAPI void DrawCircles(Circle *circles, int count);                                 // Draw circles from array of circle structs
RLAPI void DrawLines(Line *lines, int count);                                       // Draw lines from array of line structs
RLAPI void DrawTriangles(Triangle *triangles, int count);                           // Draw triangles from array of triangle structs
RLAPI void DrawRings(Ring *rings, int count);                                       // Draw rings from array of ring structs
RLAPI void DrawEllipses(Ellipse *ellipses, int count);                              // Draw ellipses from array of ellipse structs
RLAPI void DrawCubes(Cube *cubes, int count);                                       // Draw cubes from array of cube structs
RLAPI void DrawSpheres(Sphere *spheres, int count);                                 // Draw spheres from array of sphere structs
RLAPI void DrawPixels(Pixel *pixels, int count);                                    // Draw pixels from array of pixel structs
RLAPI void DrawPoints(Point *points, int count);                                    // Draw points from array of point structs
RLAPI void DrawRays(Ray *rays, Color *colors, int count);                           // Draw rays with colors from array of rays and array of colors
RLAPI void DrawGizmos(Vector3 *positions, int count);                               // Draw gizmos from array of Vector3 vectors
RLAPI void DrawCylinders(Cylinder *cylinders, int count);                           // Draw cylinders from array of cylinder structs
RLAPI void DrawPlanes(Plane *planes, int count);                                    // Draw planes from array of plane structs

//----------------------------------------------------------------------------------
// module: shapes
//----------------------------------------------------------------------------------
RLAPI bool CheckCollisionLineRec(Vector2 startPos, Vector2 endPos, Rectangle rec);                          // Check collision between line and rectangle
RLAPI bool CheckCollisionCircleLine(Vector2 center, float radius, Vector2 startPos, Vector2 endPos);        // Check collision between circle and line
RLAPI bool CheckCollisionCubes(Vector3 position1, Vector3 size1, Vector3 position2, Vector3 size2);         // Check collision between two cubes

#ifdef RLGL_H
//----------------------------------------------------------------------------------
// module: models
//----------------------------------------------------------------------------------
// 3D texts
// NOTE: they are experimental for now (They get buggy sometimes...)
RLAPI void DrawText3D(const char *text, Vector3 position, Vector3 rotationAxis, float rotationAngle, int fontSize, Color color);                                                            // Draws 2D text in 3D space
RLAPI void DrawTextEx3D(Font font, const char *text, Vector3 position, Vector3 rotationAxis, float rotationAngle, float fontSize, float spacing, Color tint);                               // Draws 2D text with extended parameters in 3D space
RLAPI void DrawTextCodepoint3D(Font font, int codepoint, Vector3 position, float scale, Vector3 rotationAxis, float rotationAngle, Color tint);                                             // Draws 2D text codepoint in 3D space

// You can draw 2D shapes in 3D space with rotation ;)
RLAPI void DrawRectangle3D(Vector3 position, Vector2 size, Vector3 rotationAxis, float rotationAngle, Color color);                                                                         // Draws 2D rectangle in 3D space
RLAPI void DrawRectangleStrip3D(Vector3 position, Vector2 size, Vector3 rotationAxis, float rotationAngle, Color color);                                                                    // Draws 2D rectangle outline in 3D space
RLAPI void DrawCircleGradient3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color1, Color color2);                                                       // Draws 2D circle gradient in 3D space
RLAPI void DrawEllipse3D(Vector3 center, float radiusH, float radiusV, Vector3 rotationAxis, float rotationAngle, Color color);                                                             // Draws 2D ellipse in 3D space
RLAPI void DrawEllipseStrip3D(Vector3 center, float radiusH, float radiusV, Vector3 rotationAxis, float rotationAngle, Color color);                                                        // Draws 2D ellipse outline in 3D space
RLAPI void DrawRectangleGradientEx3D(Vector3 center, Vector2 size, Vector3 rotationAxis, float rotationAngle, Color col1, Color col2, Color col3, Color col4);                              // Draws 2D rectangle gradient with extended parameters in 3D space
RLAPI void DrawRectangleGradientH3D(Vector3 center, Vector2 size, Vector3 rotationAxis, float rotationAngle, Color color1, Color color2);                                                   // Draws 2D rectangle horizontal gradient in 3D space
RLAPI void DrawRectangleGradientV3D(Vector3 center, Vector2 size, Vector3 rotationAxis, float rotationAngle, Color color1, Color color2);                                                   // Draws 2D rectangle vertical gradient in 3D space
RLAPI void DrawPoly3D(Vector3 center, int sides, float radius, Vector3 rotationAxis, float rotationAngle, Color color);                                                                     // Draws 2D polygon in 3D space
RLAPI void DrawPolyStrip3D(Vector3 center, int sides, float radius, Vector3 rotationAxis, float rotationAngle, Color color);                                                                // Draws 2D polygon outline in 3D space
RLAPI void DrawCircleFill3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color);                                                                          // Draws 2D filled circle in 3D space
RLAPI void DrawCircleStrip3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color);                                                                         // Draws 2D circle outline in 3D space
RLAPI void DrawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Vector3 rotationAxis, float rotationAngle, Color color);                                                                      // Draws 2D triangle in 3D space
RLAPI void DrawTriangleStrip3D(Vector3 v1, Vector3 v2, Vector3 v3, Vector3 rotationAxis, float rotationAngle, Color color);                                                                 // Draws 2D triangle outline in 3D space
RLAPI void DrawLineStrip3D(Vector3 *points, Vector3 rotationAxis, float rotationAngle, int numPoints, Color color);                                                                         // Draws 2D line sequents in 3D space
RLAPI void DrawCircleSector3D(Vector3 center, Vector3 rotationAxis, float rotationAngle, float radius, int startAngle, int endAngle, int segments, Color color);                            // Draws sector/part of 2D circle in 3D space
RLAPI void DrawCircleSectorStrip3D(Vector3 center, Vector3 rotationAxis, float rotationAngle, float radius, int startAngle, int endAngle, int segments, Color color);                       // Draws sector/part outline of 2D circle in 3D space
RLAPI void DrawRing3D(Vector3 center, Vector3 rotationAxis, float rotationAngle, float innerRadius, float outerRadius, int startAngle, int endAngle, int segments, Color color);            // Draws 2D ring in 3D space
RLAPI void DrawRingStrip3D(Vector3 center, Vector3 rotationAxis, float rotationAngle, float innerRadius, float outerRadius, int startAngle, int endAngle, int segments, Color color);       // Draws 2D ring outline in 3D space
RLAPI void DrawGridEx(Vector3 center, Vector3 rotationAxis, float rotationAngle, int slices, float spacing, Color color1, Color color2);                                                    // Draws 3D grid with extended parameters
RLAPI void DrawTexture3D(Texture2D texture, Vector3 position, Vector3 rotationAxis, float rotationAngle, float scale, Color tint);                                                          // Draws 2D texture in 3D space
RLAPI void DrawTextureEx3D(Texture2D texture, Vector3 position, Vector3 rotationAxis, float rotationAngle, float scale, Color tint);                                                        // Draws 2D texture in 3D space with extended parameters
RLAPI void DrawTexturePro3D(Texture2D texture, Rectangle sourceRec, Rectangle destRec, Vector3 origin, Vector3 rotationAxis, float rotationAngle, float posZ, Color tint);                  // Draws 2D texture in 3D space with pro parameters
#endif
RLAPI void DrawTextureSuper(Texture2D texture, int posX, int posY, float rotation, float scale, Color tint);                                                                                // Same as DrawTexture but with scale and rotation

//----------------------------------------------------------------------------------
// module: loaders
//----------------------------------------------------------------------------------
RLAPI Image *LoadImages(const char **files, int count);                                                 // Load images from array of images file paths
RLAPI Texture2D *LoadTextures(const char **files, int count);                                           // Load textures from array of textures file paths
RLAPI Texture2D *LoadTexturesFromImages(Image *images, int count);                                      // Load textures from array of loaded images
RLAPI RenderTexture2D *LoadRenderTextures(Vector2 *sizes, int count);                                   // Load render textures from array of widths and heights using Vector2
RLAPI Font *LoadFonts(const char **files, int count);                                                   // Load fonts from array of fonts file paths
RLAPI Font *LoadFontsFromImages(Image *images, Color *keys, int *firstChars, int count);                // Load fonts from loaded images with array of colors as keys and array of integers as first char of each font loaded
RLAPI Model *LoadModels(const char **files, int count);                                                 // Load models from array of models file paths
RLAPI Model *LoadModelsFromMeshes(Mesh *meshes, int count);                                             // Load models from array of loaded meshes
RLAPI Shader *LoadShaders(const char **files, int count);                                               // Load shaders from array contains pairs of vertex and fragment shader file paths
RLAPI Wave *LoadWaves(const char **files, int count);                                                      // Load waves from array of waves file paths
RLAPI Sound *LoadSounds(const char **files, int count);                                                 // Load sounds from array of sounds file paths
RLAPI Sound *LoadSoundsFromWaves(Wave *waves, int count);                                               // Load sounds from array of loaded waves
RLAPI Music *LoadMusics(const char **files, int count);                                                 // Load music streams from array of musics file paths

//----------------------------------------------------------------------------------
// module: unloaders
//----------------------------------------------------------------------------------
RLAPI void UnloadImages(Image *images, int count);                                                      // Unload images from array
RLAPI void UnloadTextures(Texture2D *textures, int count);                                              // Unload textures from array
RLAPI void UnloadRenderTextures(RenderTexture2D *targets, int count);                                   // Unload render textures from array
RLAPI void UnloadFonts(Font *fonts, int count);                                                         // Unload fonts from array
RLAPI void UnloadModels(Model *models, int count);                                                      // Unload models from array
RLAPI void UnloadMeshes(Mesh *meshes, int count);                                                       // Unload meshes from array
RLAPI void UnloadMaterials(Material *materials, int count);                                             // Unload materials from array
RLAPI void UnloadModelAnimations(ModelAnimation *animations, int count);                                // Unload model animations from array
RLAPI void UnloadShaders(Shader *shaders, int count);                                                   // Unload shaders from array
RLAPI void UnloadWaves(Wave *waves, int count);                                                         // Unload waves from array
RLAPI void UnloadSounds(Sound *sounds, int count);                                                      // Unload sounds from array
RLAPI void UnloadMusics(Music *musics, int count);                                                      // Unload music streams from array

//----------------------------------------------------------------------------------
// module: updaters
//----------------------------------------------------------------------------------
RLAPI void UpdateCameras(Camera **cameras, int count);                                                  // Update multiple cameras
RLAPI void UpdateMusics(Music *musics, int count);                                                      // Upsate music streams from array
RLAPI void UpdateTextures(Texture2D *textures, const void **pixels, int count);                         // Update textures from arrays
RLAPI void UpdateModelAnimations(Model *models, ModelAnimation *animations, int *frames, int count);    // Update model animations from arrays
RLAPI void UpdateSounds(Sound *sounds, const void **data, int *samplesCount, int count);                // Update sounds from arrays
RLAPI void UpdateAudioStreams(AudioStream *streams, const void **data, int *samplesCount, int count);   // Update audio streams from arrays

//----------------------------------------------------------------------------------
// Functions implementation
//----------------------------------------------------------------------------------
#if defined(RAYUTILS_IMPL)
// This function used by DownloadFile
// https://stackoverflow.com/questions/2736753/how-to-remove-extension-from-file-name
const char *remove_extension(char* myStr, char extSep, char pathSep) {
    char *retStr, *lastExt, *lastPath;

    // Error checks and allocate string.

    if (myStr == NULL) return NULL;
    if ((retStr = malloc (strlen (myStr) + 1)) == NULL) return NULL;

    // Make a copy and find the relevant characters.

    strcpy (retStr, myStr);
    lastExt = strrchr (retStr, extSep);
    lastPath = (pathSep == 0) ? NULL : strrchr (retStr, pathSep);

    // If it has an extension separator.

    if (lastExt != NULL) {
        // and it's to the right of the path separator.

        if (lastPath != NULL) {
            if (lastPath < lastExt) {
                // then remove it.

                *lastExt = '\0';
            }
        } else {
            // Has extension separator with no path separator.

            *lastExt = '\0';
        }
    }

    // Return the modified string.

    return retStr;
}

void DownloadFile(const char *src, const char *dir)
{
    #ifndef __ANDROID__ || TARGET_OS_IPHONE || TARGET_OS_EMBEDDED || TARGET_IPHONE_SIMULATOR
        if (system("curl --version") == 0) {
            if (!system(FormatText("cd %s", remove_extension(dir, ".", "/"))) == 0) system(FormatText("mkdir %s", remove_extension(dir, ".", "/")));
            system(FormatText("curl -o %s/%s %s", dir, GetFileName(src), src));
        }
    #endif
}

void Execute(const char *command)
{
    #ifndef TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR || TARGET_OS_EMBEDDED
        #ifdef __ANDROID__
            if (fork() == 0) return system(command);
        #else
            return system(command);
        #endif
    #endif
}

void DrawRectangles(Rectangle *recs, bool *lines, Color *colors, int count) {
    for (int i = 0; i < count; i++) {
        if (lines[i]) {
            DrawRectangleLines(recs[i].x, recs[i].y, recs[i].width, recs[i].height, colors[i]);
        } else {
            DrawRectangle(recs[i].x, recs[i].y, recs[i].width, recs[i].height, colors[i]);
        }
    }
}

void DrawCircles(Circle *circles, int count) {
    for (int i = 0; i < count; i++) {
        if (circles[i].lines) {
            DrawCircleLines(circles[i].x, circles[i].y, circles[i].radius, circles[i].color);
        } else {
            DrawCircle(circles[i].x, circles[i].y, circles[i].radius, circles[i].color);
        }
    }
}

void DrawLines(Line *lines, int count) {
    for (int i = 0; i < count; i++) DrawLineEx(lines[i].startPos, lines[i].endPos, lines[i].thick, lines[i].color);
}

void DrawTriangles(Triangle *triangles, int count) {
    for (int i = 0; i < count; i++) {
        if (triangles[i].lines) {
            DrawTriangleLines(triangles[i].v1, triangles[i].v2, triangles[i].v3, triangles[i].color);
        } else {
            DrawTriangle(triangles[i].v1, triangles[i].v2, triangles[i].v3, triangles[i].color);
        }
    }
}

void DrawCubes(Cube *cubes, int count) {
    for (int i = 0; i < count; i++) {
        if (cubes[i].wires) {
            DrawCubeWiresV(cubes[i].position, cubes[i].size, cubes[i].color);
        } else {
            DrawCubeV(cubes[i].position, cubes[i].size, cubes[i].color);
        }
    }
}

void DrawEllipses(Ellipse *ellipses, int count) {
    for (int i = 0; i < count; i++) {
        if (ellipses[i].lines) {
            DrawEllipseLines(ellipses[i].x, ellipses[i].y, ellipses[i].radiusH, ellipses[i].radiusV, ellipses[i].color);
        } else {
            DrawEllipse(ellipses[i].x, ellipses[i].y, ellipses[i].radiusH, ellipses[i].radiusV, ellipses[i].color);
        }
    }
}


void DrawRings(Ring *rings, int count) {
    for (int i = 0; i < count; i++) {
        if (rings[i].lines) {
            DrawRingLines(rings[i].center, rings[i].innerRadius, rings[i].outerRadius, rings[i].startAngle, rings[i].endAngle, rings[i].segments, rings[i].color);
        } else {
            DrawRing(rings[i].center, rings[i].innerRadius, rings[i].outerRadius, rings[i].startAngle, rings[i].endAngle, rings[i].segments, rings[i].color);
        }
    }
}

void DrawSpheres(Sphere *spheres, int count) {
    for (int i = 0; i < count; i++) {
        if (spheres[i].wires) {
            DrawSphereWires(spheres[i].position, spheres[i].radius, spheres[i].rings, spheres[i].slices, spheres[i].color);
        } else {
            DrawSphereEx(spheres[i].position, spheres[i].radius, spheres[i].rings, spheres[i].slices, spheres[i].color);
        }
    }
}

void DrawCylinders(Cylinder *cylinders, int count) {
    for (int i = 0; i < count; i++) {
        if (cylinders[i].wires) {
            DrawCylinderWires(cylinders[i].position, cylinders[i].radiusTop, cylinders[i].radiusBottom, cylinders[i].height, cylinders[i].slices, cylinders[i].color);
        } else {
            DrawCylinder(cylinders[i].position, cylinders[i].radiusTop, cylinders[i].radiusBottom, cylinders[i].height, cylinders[i].slices, cylinders[i].color);
        }
    }
}

void DrawPixels(Pixel *pixels, int count) {
    for (int i = 0; i < count; i++) DrawPixel(pixels[i].x, pixels[i].y, pixels[i].color);
}

void DrawPoints(Point *points, int count) {
    for (int i = 0; i < count; i++) DrawPoint3D(points[i].position, points[i].color);
}

void DrawRays(Ray *rays, Color *colors, int count) {
    for (int i = 0; i < count; i++) DrawRay(rays[i], colors[i]);
}

void DrawGizmos(Vector3 *positions, int count) {
    for (int i = 0; i < count; i++) DrawGizmo(positions[i]);
}

void DrawPlanes(Plane *planes, int count) {
    for (int i = 0; i < count; i++) DrawPlane(planes[i].position, planes[i].size, planes[i].color);
}

#ifdef RLGL_H
void DrawText3D(const char *text, Vector3 position, Vector3 rotationAxis, float rotationAngle, int fontSize, Color color)
{
    // Check if default font has been loaded
    if (GetFontDefault().texture.id != 0)
    {

        int defaultFontSize = 10;   // Default Font chars height in pixel
        if (fontSize < defaultFontSize) fontSize = defaultFontSize;
        int spacing = fontSize/defaultFontSize;

        DrawTextEx3D(GetFontDefault(), text, position, rotationAxis, rotationAngle, (float)fontSize, (float)spacing, color);
    }
}

void DrawTextCodepoint3D(Font font, int codepoint, Vector3 position, float scale, Vector3 rotationAxis, float rotationAngle, Color tint)
{
    // Character index position in sprite font
    // NOTE: In case a codepoint is not available in the font, index returned points to '?'
    int index = GetGlyphIndex(font, codepoint);

    // Character rectangle on screen
    // NOTE: Quad is scaled proportionally to base character width-height
    Rectangle rec = { position.x, position.y, font.recs[index].width*-scale, font.recs[index].height*-scale };

    DrawTexturePro3D(font.texture, font.recs[index], rec, (Vector3){ 0, 0, 0 }, rotationAxis, rotationAngle, position.z, tint);
}

void DrawTextEx3D(Font font, const char *text, Vector3 position, Vector3 rotationAxis, float rotationAngle, float fontSize, float spacing, Color tint)
{
    int length = TextLength(text);      // Total length in bytes of the text, scanned by codepoints in loop

    int textOffsetY = 0;            // Offset between lines (on line break '\n')
    float textOffsetX = 0.0f;       // Offset X to next character to draw

    float scaleFactor = fontSize/font.baseSize;     // Character quad scaling factor

    for (int i = 0; i < length; i++)
    {
        // Get next codepoint from byte string and glyph index in font
        int codepointByteCount = 0;
        int codepoint = GetNextCodepoint(&text[i], &codepointByteCount);
        int index = GetGlyphIndex(font, codepoint);

        // NOTE: Normally we exit the decoding sequence as soon as a bad byte is found (and return 0x3f)
        // but we need to draw all of the bad bytes using the '?' symbol moving one byte
        if (codepoint == 0x3f) codepointByteCount = 1;

        if (codepoint == '\n')
        {
            // NOTE: Fixed line spacing of 1.5 line-height
            // TODO: Support custom line spacing defined by user
            textOffsetY += (int)((font.baseSize + font.baseSize/2)*scaleFactor);
            textOffsetX = 0.0f;
        }
        else
        {
            if ((codepoint != ' ') && (codepoint != '\t'))
            {
                Rectangle rec = { position.x + textOffsetX + font.chars[index].offsetX*scaleFactor,
                                  position.y + textOffsetY + font.chars[index].offsetY*scaleFactor,
                                  font.recs[index].width*scaleFactor,
                                  font.recs[index].height*scaleFactor };

                DrawTexturePro3D(font.texture, font.recs[index], rec, (Vector3){ 0, 0, 0 }, rotationAxis, rotationAngle, position.z, tint);
            }

            if (font.chars[index].advanceX == 0) textOffsetX += ((float)font.recs[index].width*scaleFactor + spacing);
            else textOffsetX += ((float)font.chars[index].advanceX*scaleFactor + spacing);
        }

        i += (codepointByteCount - 1);   // Move text bytes counter to next codepoint
    }
}

void DrawRectangle3D(Vector3 position, Vector2 size, Vector3 rotationAxis, float rotationAngle, Color color) {
    rlPushMatrix();
    rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
    rlBegin(RL_TRIANGLES);
        rlColor4ub(color.r, color.g, color.b, color.a);
        rlVertex3f(position.x, position.y, position.z);
        rlVertex3f(position.x + size.x, position.y, position.z);
        rlVertex3f(position.x, position.y + size.y, position.z);
        rlVertex3f(position.x, position.y + size.y, position.z);
        rlVertex3f(position.x + size.x, position.y, position.z);
        rlVertex3f(position.x + size.x, position.y + size.y, position.z);
    rlEnd();
    rlPopMatrix();
}

void DrawRectangleStrip3D(Vector3 position, Vector2 size, Vector3 rotationAxis, float rotationAngle, Color color) {
    rlPushMatrix();
    rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
    rlColor4ub(color.r, color.g, color.b, color.a);
    rlBegin(RL_LINES);
        rlVertex3f(position.x, position.y, position.z);
        rlVertex3f(position.x + size.x, position.y, position.z);
        rlVertex3f(position.x + size.x, position.y, position.z);
        rlVertex3f(position.x + size.x, position.y + size.y, position.z);
        rlVertex3f(position.x + size.x, position.y + size.y, position.z);
        rlVertex3f(position.x, position.y + size.y, position.z);
        rlVertex3f(position.x, position.y + size.y, position.z);
        rlVertex3f(position.x, position.y, position.z);
    rlEnd();
    rlPopMatrix();
}

void DrawEllipse3D(Vector3 center, float radiusH, float radiusV, Vector3 rotationAxis, float rotationAngle, Color color) {
    if (rlCheckBufferLimit(3*36)) rlglDraw();
    
    rlPushMatrix();
        rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
        rlBegin(RL_TRIANGLES);
            for (int i = 0; i < 360; i += 10)
            {
                rlColor4ub(color.r, color.g, color.b, color.a);
                rlVertex3f(center.x, center.y, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*i)*radiusH, center.y + cosf(DEG2RAD*i)*radiusV, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*(i + 10))*radiusH, center.y + cosf(DEG2RAD*(i + 10))*radiusV, center.z);
            }
        rlEnd();
    rlPopMatrix();
}

void DrawEllipseStrip3D(Vector3 center, float radiusH, float radiusV, Vector3 rotationAxis, float rotationAngle, Color color) {
    if (rlCheckBufferLimit(2*36)) rlglDraw();
    
    rlPushMatrix();
        rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
        rlBegin(RL_LINES);
            for (int i = 0; i < 360; i += 10)
            {
                rlColor4ub(color.r, color.g, color.b, color.a);
                rlVertex3f(center.x + sinf(DEG2RAD*i)*radiusH, center.y + cosf(DEG2RAD*i)*radiusV, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*(i + 10))*radiusH, center.y + cosf(DEG2RAD*(i + 10))*radiusV, center.z);
            }
        rlEnd();
    rlEnd();
}

void DrawRectangleGradientEx3D(Vector3 center, Vector2 size, Vector3 rotationAxis, float rotationAngle, Color col1, Color col2, Color col3, Color col4) {
    rlEnableTexture(GetShapesTexture().id);

    rlPushMatrix();
    rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
        rlBegin(RL_QUADS);
            rlNormal3f(0.0f, 0.0f, 1.0f);

            // NOTE: Default raylib font character 95 is a white square
            rlColor4ub(col1.r, col1.g, col1.b, col1.a);
            rlTexCoord2f(GetShapesTextureRec().x/GetShapesTexture().width, GetShapesTextureRec().y/GetShapesTexture().height);
            rlVertex3f(center.x, center.y, center.z);

            rlColor4ub(col2.r, col2.g, col2.b, col2.a);
            rlTexCoord2f(GetShapesTextureRec().x/GetShapesTexture().width, (GetShapesTextureRec().y + GetShapesTextureRec().height)/GetShapesTexture().height);
            rlVertex3f(center.x, center.y + size.y, center.z);

            rlColor4ub(col3.r, col3.g, col3.b, col3.a);
            rlTexCoord2f((GetShapesTextureRec().x + GetShapesTextureRec().width)/GetShapesTexture().width, (GetShapesTextureRec().y + GetShapesTextureRec().height)/GetShapesTexture().height);
            rlVertex3f(center.x + size.x, center.y + size.y, center.z);

            rlColor4ub(col4.r, col4.g, col4.b, col4.a);
            rlTexCoord2f((GetShapesTextureRec().x + GetShapesTextureRec().width)/GetShapesTexture().width, GetShapesTextureRec().y/GetShapesTexture().height);
            rlVertex3f(center.x + size.x, center.y, center.z);
        rlEnd();
    rlPopMatrix();

    rlDisableTexture();
}

void DrawRectangleGradientV3D(Vector3 center, Vector2 size, Vector3 rotationAxis, float rotationAngle, Color color1, Color color2) {
    DrawRectangleGradientEx3D(center, size, rotationAxis, rotationAngle, color1, color2, color2, color1);
}

void DrawRectangleGradientH3D(Vector3 center, Vector2 size, Vector3 rotationAxis, float rotationAngle, Color color1, Color color2) {
    DrawRectangleGradientEx3D(center, size, rotationAxis, rotationAngle, color2, color1, color1, color2);
}

void DrawPoly3D(Vector3 center, int sides, float radius, Vector3 rotationAxis, float rotationAngle, Color color) {
    
    if (sides < 3) sides = 3;
    float centralAngle = 0.0f;

    if (rlCheckBufferLimit(4*(360/sides))) rlglDraw();

    rlPushMatrix();
        rlTranslatef(center.x, center.y, center.z);
        rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
        rlBegin(RL_TRIANGLES);
            for (int i = 0; i < sides; i++)
            {
                rlColor4ub(color.r, color.g, color.b, color.a);

                rlVertex3f(0, 0, 0);
                rlVertex3f(sinf(DEG2RAD*centralAngle)*radius, cosf(DEG2RAD*centralAngle)*radius, 0);

                centralAngle += 360.0f/(float)sides;
                rlVertex3f(sinf(DEG2RAD*centralAngle)*radius, cosf(DEG2RAD*centralAngle)*radius, 0);
            }
        rlEnd();
    rlPopMatrix();
}

void DrawPolyStrip3D(Vector3 center, int sides, float radius, Vector3 rotationAxis, float rotationAngle, Color color) {
    if (sides < 3) sides = 3;
    float centralAngle = 0.0f;

    if (rlCheckBufferLimit(3*(360/sides))) rlglDraw();

    rlPushMatrix();
        rlTranslatef(center.x, center.y, center.z);
        rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);

        rlBegin(RL_LINES);
            for (int i = 0; i < sides; i++)
            {
                rlColor4ub(color.r, color.g, color.b, color.a);

                rlVertex3f(sinf(DEG2RAD*centralAngle)*radius, cosf(DEG2RAD*centralAngle)*radius, 0);
                centralAngle += 360.0f/(float)sides;
                rlVertex3f(sinf(DEG2RAD*centralAngle)*radius, cosf(DEG2RAD*centralAngle)*radius, 0);
            }
        rlEnd();
    rlPopMatrix();
}

void DrawCircleFill3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color) {
    int startAngle = 0;
    int endAngle = 360;
    int segments = 36;
    int angle = startAngle;
    int stepLength = (float)(endAngle - startAngle)/(float)segments;
    
    if (rlCheckBufferLimit(3*segments)) rlglDraw();
    
    rlPushMatrix();
        rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
        rlBegin(RL_TRIANGLES);
            for (int i = 0; i < segments; i++)
            {
                rlColor4ub(color.r, color.g, color.b, color.a);

                rlVertex3f(center.x, center.y, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*angle)*radius, center.y + cosf(DEG2RAD*angle)*radius, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*(angle + stepLength))*radius, center.y + cosf(DEG2RAD*(angle + stepLength))*radius, center.z);

                angle += stepLength;
            }
        rlEnd();
    rlPopMatrix();
}

void DrawCircleStrip3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color) {
    if (rlCheckBufferLimit(2*36)) rlglDraw();

    rlPushMatrix();
        rlTranslatef(center.x, center.y, center.z);
        rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);

        rlBegin(RL_LINES);
            for (int i = 0; i < 360; i += 10)
            {
                rlColor4ub(color.r, color.g, color.b, color.a);

                rlVertex3f(sinf(DEG2RAD*i)*radius, cosf(DEG2RAD*i)*radius, 0.0f);
                rlVertex3f(sinf(DEG2RAD*(i + 10))*radius, cosf(DEG2RAD*(i + 10))*radius, 0.0f);
            }
        rlEnd();
    rlPopMatrix();
}

void DrawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Vector3 rotationAxis, float rotationAngle, Color color) {
    if (rlCheckBufferLimit(4)) rlglDraw();
    rlPushMatrix();
        rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
        rlBegin(RL_TRIANGLES);
            rlColor4ub(color.r, color.g, color.b, color.a);
            rlVertex3f(v1.x, v1.y, v1.z);
            rlVertex3f(v2.x, v2.y, v2.z);
            rlVertex3f(v3.x, v3.y, v3.z);
        rlEnd();
    rlPopMatrix();
}

void DrawTriangleStrip3D(Vector3 v1, Vector3 v2, Vector3 v3, Vector3 rotationAxis, float rotationAngle, Color color) {
    if (rlCheckBufferLimit(7)) rlglDraw();
    rlPushMatrix();
        rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
        rlBegin(RL_LINES);
            rlColor4ub(color.r, color.g, color.b, color.a);
            rlVertex3f(v1.x, v1.y, v1.z);
            rlVertex3f(v2.x, v2.y, v2.z);
            rlVertex3f(v2.x, v2.y, v2.z);
            rlVertex3f(v3.x, v3.y, v3.z);
            rlVertex3f(v3.x, v3.y, v3.z);
            rlVertex3f(v1.x, v1.y, v1.z);
        rlEnd();
    rlPopMatrix();
}

void DrawLineStrip3D(Vector3 *points, Vector3 rotationAxis, float rotationAngle, int pointsCount, Color color)
{
    if (pointsCount >= 2)
    {
        if (rlCheckBufferLimit(pointsCount)) rlglDraw();
        rlPushMatrix();
            rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
            rlBegin(RL_LINES);
                rlColor4ub(color.r, color.g, color.b, color.a);

                for (int i = 0; i < pointsCount - 1; i++)
                {
                    rlVertex3f(points[i].x, points[i].y, points[i].z);
                    rlVertex3f(points[i + 1].x, points[i + 1].y, points[i + 1].z);
                }
            rlEnd();
        rlPopMatrix();
    }
}

void DrawCircleGradient3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color1, Color color2) {
    if (rlCheckBufferLimit(3*36)) rlglDraw();
    
    rlPushMatrix();
        rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
        rlBegin(RL_TRIANGLES);
            for (int i = 0; i < 360; i += 10)
            {
                rlColor4ub(color1.r, color1.g, color1.b, color1.a);
                rlVertex3f(center.x, center.y, center.z);
                rlColor4ub(color2.r, color2.g, color2.b, color2.a);
                rlVertex3f(center.x + sinf(DEG2RAD*i)*radius, center.y + cosf(DEG2RAD*i)*radius, center.z);
                rlColor4ub(color2.r, color2.g, color2.b, color2.a);
                rlVertex3f(center.x + sinf(DEG2RAD*(i + 10))*radius, center.y + cosf(DEG2RAD*(i + 10))*radius, center.z);
            }
        rlEnd();
    rlPopMatrix();
}

void DrawCircleSector3D(Vector3 center, Vector3 rotationAxis, float rotationAngle, float radius, int startAngle, int endAngle, int segments, Color color) {
    if (radius <= 0.0f) radius = 0.1f;  // Avoid div by zero

    // Function expects (endAngle > startAngle)
    if (endAngle < startAngle)
    {
        // Swap values
        int tmp = startAngle;
        startAngle = endAngle;
        endAngle = tmp;
    }

    if (segments < 4)
    {
        // Calculate how many segments we need to draw a smooth circle, taken from https://stackoverflow.com/a/2244088
        #define CIRCLE_ERROR_RATE  0.5f

        // Calculate the maximum angle between segments based on the error rate.
        float th = acosf(2*powf(1 - CIRCLE_ERROR_RATE/radius, 2) - 1);
        segments = (endAngle - startAngle)*ceilf(2*PI/th)/360;

        if (segments <= 0) segments = 4;
    }
    
    float stepLength = (float)(endAngle - startAngle)/(float)segments;
    float angle = startAngle;
    
    if (rlCheckBufferLimit(3*segments)) rlglDraw();
    
    rlPushMatrix();
        rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
        rlBegin(RL_TRIANGLES);
            for (int i = 0; i < segments; i++)
            {
                rlColor4ub(color.r, color.g, color.b, color.a);

                rlVertex3f(center.x, center.y, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*angle)*radius, center.y + cosf(DEG2RAD*angle)*radius, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*(angle + stepLength))*radius, center.y + cosf(DEG2RAD*(angle + stepLength))*radius, center.z);

                angle += stepLength;
            }
        rlEnd();
    rlPopMatrix();
}

void DrawCircleSectorStrip3D(Vector3 center, Vector3 rotationAxis, float rotationAngle, float radius, int startAngle, int endAngle, int segments, Color color) {
    if (radius <= 0.0f) radius = 0.1f;  // Avoid div by zero issue

    // Function expects (endAngle > startAngle)
    if (endAngle < startAngle)
    {
        // Swap values
        int tmp = startAngle;
        startAngle = endAngle;
        endAngle = tmp;
    }

    if (segments < 4)
    {
        // Calculate how many segments we need to draw a smooth circle, taken from https://stackoverflow.com/a/2244088
        #ifndef CIRCLE_ERROR_RATE
        #define CIRCLE_ERROR_RATE  0.5f
        #endif

        // Calculate the maximum angle between segments based on the error rate.
        float th = acosf(2*powf(1 - CIRCLE_ERROR_RATE/radius, 2) - 1);
        segments = (endAngle - startAngle)*ceilf(2*PI/th)/360;

        if (segments <= 0) segments = 4;
    }

    float stepLength = (float)(endAngle - startAngle)/(float)segments;
    float angle = startAngle;

    // Hide the cap lines when the circle is full
    bool showCapLines = true;
    int limit = 2*(segments + 2);
    if ((endAngle - startAngle)%360 == 0) { limit = 2*segments; showCapLines = false; }

    if (rlCheckBufferLimit(limit)) rlglDraw();
    
    rlPushMatrix();
        rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
        rlBegin(RL_LINES);
            if (showCapLines)
            {
                rlColor4ub(color.r, color.g, color.b, color.a);
                rlVertex3f(center.x, center.y, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*angle)*radius, center.y + cosf(DEG2RAD*angle)*radius, center.z);
            }

            for (int i = 0; i < segments; i++)
            {
                rlColor4ub(color.r, color.g, color.b, color.a);

                rlVertex3f(center.x + sinf(DEG2RAD*angle)*radius, center.y + cosf(DEG2RAD*angle)*radius, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*(angle + stepLength))*radius, center.y + cosf(DEG2RAD*(angle + stepLength))*radius, center.z);

                angle += stepLength;
            }

            if (showCapLines)
            {
                rlColor4ub(color.r, color.g, color.b, color.a);
                rlVertex3f(center.x, center.y, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*angle)*radius, center.y + cosf(DEG2RAD*angle)*radius, center.z);
            }
        rlEnd();
    rlPopMatrix();
}

void DrawRing3D(Vector3 center, Vector3 rotationAxis, float rotationAngle, float innerRadius, float outerRadius, int startAngle, int endAngle, int segments, Color color) {
    if (startAngle == endAngle) return;

    // Function expects (outerRadius > innerRadius)
    if (outerRadius < innerRadius)
    {
        float tmp = outerRadius;
        outerRadius = innerRadius;
        innerRadius = tmp;

        if (outerRadius <= 0.0f) outerRadius = 0.1f;
    }

    // Function expects (endAngle > startAngle)
    if (endAngle < startAngle)
    {
        // Swap values
        int tmp = startAngle;
        startAngle = endAngle;
        endAngle = tmp;
    }

    if (segments < 4)
    {
        // Calculate how many segments we need to draw a smooth circle, taken from https://stackoverflow.com/a/2244088
        #ifndef CIRCLE_ERROR_RATE
            #define CIRCLE_ERROR_RATE  0.5f
        #endif

        // Calculate the maximum angle between segments based on the error rate.
        float th = acosf(2*powf(1 - CIRCLE_ERROR_RATE/outerRadius, 2) - 1);
        segments = (endAngle - startAngle)*ceilf(2*PI/th)/360;

        if (segments <= 0) segments = 4;
    }

    // Not a ring
    if (innerRadius <= 0.0f)
    {
        DrawCircleSector3D(center, rotationAxis, rotationAngle, outerRadius, startAngle, endAngle, segments, color);
        return;
    }

    float stepLength = (float)(endAngle - startAngle)/(float)segments;
    float angle = startAngle;
    
    if (rlCheckBufferLimit(6*segments)) rlglDraw();
    
    rlPushMatrix();
        rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
        rlBegin(RL_TRIANGLES);
            for (int i = 0; i < segments; i++)
            {
                rlColor4ub(color.r, color.g, color.b, color.a);

                rlVertex3f(center.x + sinf(DEG2RAD*angle)*innerRadius, center.y + cosf(DEG2RAD*angle)*innerRadius, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*angle)*outerRadius, center.y + cosf(DEG2RAD*angle)*outerRadius, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*(angle + stepLength))*innerRadius, center.y + cosf(DEG2RAD*(angle + stepLength))*innerRadius, center.z);

                rlVertex3f(center.x + sinf(DEG2RAD*(angle + stepLength))*innerRadius, center.y + cosf(DEG2RAD*(angle + stepLength))*innerRadius, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*angle)*outerRadius, center.y + cosf(DEG2RAD*angle)*outerRadius, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*(angle + stepLength))*outerRadius, center.y + cosf(DEG2RAD*(angle + stepLength))*outerRadius, center.z);

                angle += stepLength;
            }
        
        rlEnd();
    rlPopMatrix();
}

void DrawRingStrip3D(Vector3 center, Vector3 rotationAxis, float rotationAngle, float innerRadius, float outerRadius, int startAngle, int endAngle, int segments, Color color) {
    if (startAngle == endAngle) return;

    // Function expects (outerRadius > innerRadius)
    if (outerRadius < innerRadius)
    {
        float tmp = outerRadius;
        outerRadius = innerRadius;
        innerRadius = tmp;

        if (outerRadius <= 0.0f) outerRadius = 0.1f;
    }

    // Function expects (endAngle > startAngle)
    if (endAngle < startAngle)
    {
        // Swap values
        int tmp = startAngle;
        startAngle = endAngle;
        endAngle = tmp;
    }

    if (segments < 4)
    {
        // Calculate how many segments we need to draw a smooth circle, taken from https://stackoverflow.com/a/2244088
        #ifndef CIRCLE_ERROR_RATE
            #define CIRCLE_ERROR_RATE  0.5f
        #endif

        // Calculate the maximum angle between segments based on the error rate.
        float th = acosf(2*powf(1 - CIRCLE_ERROR_RATE/outerRadius, 2) - 1);
        segments = (endAngle - startAngle)*ceilf(2*PI/th)/360;

        if (segments <= 0) segments = 4;
    }

    if (innerRadius <= 0.0f)
    {
        DrawCircleSectorStrip3D(center, rotationAxis, rotationAngle, outerRadius, startAngle, endAngle, segments, color);
        return;
    }

    float stepLength = (float)(endAngle - startAngle)/(float)segments;
    float angle = startAngle;

    bool showCapLines = true;
    int limit = 4*(segments + 1);
    if ((endAngle - startAngle)%360 == 0) { limit = 4*segments; showCapLines = false; }

    if (rlCheckBufferLimit(limit)) rlglDraw();
    
    rlPushMatrix();
        rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
        rlBegin(RL_LINES);
            if (showCapLines)
            {
                rlColor4ub(color.r, color.g, color.b, color.a);
                rlVertex3f(center.x + sinf(DEG2RAD*angle)*outerRadius, center.y + cosf(DEG2RAD*angle)*outerRadius, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*angle)*innerRadius, center.y + cosf(DEG2RAD*angle)*innerRadius, center.z);
            }

            for (int i = 0; i < segments; i++)
            {
                rlColor4ub(color.r, color.g, color.b, color.a);

                rlVertex3f(center.x + sinf(DEG2RAD*angle)*outerRadius, center.y + cosf(DEG2RAD*angle)*outerRadius, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*(angle + stepLength))*outerRadius, center.y + cosf(DEG2RAD*(angle + stepLength))*outerRadius, center.z);

                rlVertex3f(center.x + sinf(DEG2RAD*angle)*innerRadius, center.y + cosf(DEG2RAD*angle)*innerRadius, center.z);
                rlVertex3f(center.x + sinf(DEG2RAD*(angle + stepLength))*innerRadius, center.y + cosf(DEG2RAD*(angle + stepLength))*innerRadius, center.z);

                angle += stepLength;
            }

            if (showCapLines)
            {
                rlColor4ub(color.r, color.g, color.b, color.a);
                rlVertex2f(center.x + sinf(DEG2RAD*angle)*outerRadius, center.y + cosf(DEG2RAD*angle)*outerRadius);
                rlVertex2f(center.x + sinf(DEG2RAD*angle)*innerRadius, center.y + cosf(DEG2RAD*angle)*innerRadius);
            }
        rlEnd();
    rlPopMatrix();
}

void DrawTexture3D(Texture2D texture, Vector3 position, Vector3 rotationAxis, float rotationAngle, float scale, Color tint) {
    DrawTextureEx3D(texture, position, rotationAxis, rotationAngle, scale, tint);
}

void DrawTextureEx3D(Texture2D texture, Vector3 position, Vector3 rotationAxis, float rotationAngle, float scale, Color tint)
{
    Rectangle sourceRec = { 0.0f, 0.0f, (float)texture.width, (float)texture.height };
    Rectangle destRec = { position.x, position.y, (float)texture.width*scale, (float)texture.height*scale };
    Vector3 origin = { 0.0f, 0.0f, 0.0f };

    DrawTexturePro3D(texture, sourceRec, destRec, origin, rotationAxis, rotationAngle, position.z, tint);
}

void DrawTexturePro3D(Texture2D texture, Rectangle sourceRec, Rectangle destRec, Vector3 origin, Vector3 rotationAxis, float rotationAngle, float posZ, Color tint)
{
    // Check if texture is valid
    if (texture.id > 0)
    {
        float width = (float)texture.width;
        float height = (float)texture.height;
        
        bool flipX = false;

        if (sourceRec.width < 0) { flipX = true; sourceRec.width *= -1; }
        if (sourceRec.height < 0) sourceRec.y -= sourceRec.height;

        rlEnableTexture(texture.id);
        rlPushMatrix();
            rlTranslatef(destRec.x, destRec.y, 0.0f);
            rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
            rlTranslatef(-origin.x, -origin.y, -origin.z);

            rlBegin(RL_QUADS);
                rlColor4ub(tint.r, tint.g, tint.b, tint.a);
                rlNormal3f(0.0f, 0.0f, 1.0f);                          // Normal vector pointing towards viewer

                // Bottom-left corner for texture and quad
                if (flipX) rlTexCoord2f((sourceRec.x + sourceRec.width)/width, sourceRec.y/height);
                else rlTexCoord2f(sourceRec.x/width, sourceRec.y/height);
                rlVertex3f(0.0f, 0.0f, posZ);
                
                // Bottom-right corner for texture and quad
                if (flipX) rlTexCoord2f((sourceRec.x + sourceRec.width)/width, (sourceRec.y + sourceRec.height)/height);
                else rlTexCoord2f(sourceRec.x/width, (sourceRec.y + sourceRec.height)/height);
                rlVertex3f(0.0f, destRec.height, posZ);

                // Top-right corner for texture and quad
                if (flipX) rlTexCoord2f(sourceRec.x/width, (sourceRec.y + sourceRec.height)/height);
                else rlTexCoord2f((sourceRec.x + sourceRec.width)/width, (sourceRec.y + sourceRec.height)/height);
                rlVertex3f(destRec.width, destRec.height, posZ);

                // Top-left corner for texture and quad
                if (flipX) rlTexCoord2f(sourceRec.x/width, sourceRec.y/height);
                else rlTexCoord2f((sourceRec.x + sourceRec.width)/width, sourceRec.y/height);
                rlVertex3f(destRec.width, 0.0f, posZ);
            rlEnd();
        rlPopMatrix();
        rlDisableTexture();
    }
}

void DrawGridEx(Vector3 center, Vector3 rotationAxis, float rotationAngle, int slices, float spacing, Color color1, Color color2) {   
    int halfSlices = slices/2;

    if (rlCheckBufferLimit(slices*4)) rlglDraw();
    
    rlPushMatrix();
        rlRotatef(rotationAngle, rotationAxis.x, rotationAxis.y, rotationAxis.z);
        rlBegin(RL_LINES);
            for (int i = -halfSlices; i <= halfSlices; i++)
            {
                if (i == 0)
                {
                    rlColor4f(color2.r, color2.g, color2.b, color2.a);
                    rlColor4f(color2.r, color2.g, color2.b, color2.a);
                    rlColor4f(color2.r, color2.g, color2.b, color2.a);
                    rlColor4f(color2.r, color2.g, color2.b, color2.a);
                }
                else
                {
                    rlColor4f(color1.r, color1.g, color1.b, color1.a);
                    rlColor4f(color1.r, color1.g, color1.b, color1.a);
                    rlColor4f(color1.r, color1.g, color1.b, color1.a);
                    rlColor4f(color1.r, color1.g, color1.b, color1.a);
                }

                rlVertex3f((float)i*spacing + center.x, center.y, (float)-halfSlices*spacing + center.z);
                rlVertex3f((float)i*spacing + center.x, center.y, (float)halfSlices*spacing + center.z);

                rlVertex3f((float)-halfSlices*spacing + center.x, center.y, (float)i*spacing + center.z);
                rlVertex3f((float)halfSlices*spacing + center.x, center.y, (float)i*spacing + center.z);
            }
        rlEnd();
    rlPopMatrix();
}

#endif

void DrawTextureSuper(Texture2D texture, int posX, int posY, float rotation, float scale, Color tint)
{
    DrawTextureEx(texture, (Vector2){ (float)posX, (float)posY }, rotation, scale, tint);
}

bool CheckCollisionLineRec(Vector2 startPos, Vector2 endPos, Rectangle rec) {
    // check if the line has hit any of the rectangle's sides
    // uses the Line/Line function below
    bool left   = CheckCollisionLineLine(startPos, endPos, (Vector2) { rec.x, rec.y }, (Vector2) { rec.x, rec.y + rec.height });
    bool right  = CheckCollisionLineLine(startPos, endPos, (Vector2) { rec.x + rec.width, rec.y }, (Vector2) { rec.x + rec.width, rec.y + rec.height });
    bool top    = CheckCollisionLineLine(startPos, endPos, (Vector2) { rec.x, rec.y }, (Vector2) { rec.x + rec.width, rec.y });
    bool bottom = CheckCollisionLineLine(startPos, endPos, (Vector2) { rec.x, rec.y + rec.height }, (Vector2) { rec.x + rec.width, rec.y + rec.height });

    // if ANY of the above are true, the line
    // has hit the rectangle
    if (left || right || top || bottom) { return true; }
    return false;
}

bool CheckCollisionCircleLine(Vector2 center, float radius, Vector2 startPos, Vector2 endPos) {
    float u = ((center.x - startPos.x) * (endPos.x - startPos.x) + (center.y - startPos.y) * (endPos.y - startPos.y)) / ((endPos.y - startPos.y) * (endPos.y - startPos.y) + (endPos.x - startPos.x) * (endPos.x - startPos.x));
    float dist = 0;
    if (u >= 0 && u <= 1) {
        dist = pow((startPos.x + (endPos.x - startPos.x) * u - center.x), 2) + pow((startPos.y + (endPos.y - startPos.y) * u - center.y), 2);
    } else {
        if (u < 0) {
            dist = pow((startPos.x - center.x), 2) + pow((startPos.y - center.y), 2);
        } else {
            dist = pow((endPos.x - center.x), 2) + pow((startPos.y - center.y), 2);
        }
    }
    return (dist < pow(radius, 2));
}

bool CheckCollisionCubes(Vector3 position1, Vector3 size1, Vector3 position2, Vector3 size2) {
    if (abs(position1.x - position2.x) < (size1.x + size2.x)) {
        if (abs(position1.y - position2.y) < (size1.y + size2.y)) {
            if (abs(position1.z - position2.z) < (size1.z + size2.z)) {
                return true;
            }
        }
    }
    return false;
}

Image *LoadImages(const char **files, int count) {
    Image images[count];
    for (int i = 0; i < count; i++) images[i] = LoadImage(files[i]);
    return images;
}

Texture2D *LoadTextures(const char **files, int count) {
    Texture2D textures[count];
    for (int i = 0; i < count; i++) textures[i] = LoadTexture(files[i]);
    return textures;
}

Texture2D *LoadTexturesFromImages(Image *images, int count) {
    Texture2D textures[count];
    for (int i = 0; i < count; i++) textures[i] = LoadTextureFromImage(images[i]);
    return textures;
}

RenderTexture2D *LoadRenderTextures(Vector2 *sizes, int count) {
    RenderTexture2D targets[count];
    for (int i = 0; i < count; i++) targets[i] = LoadRenderTexture(sizes[i].x, sizes[i].y);
    return targets;
}

Font *LoadFonts(const char **files, int count) {
    Font fonts[count];
    for (int i = 0; i < count; i++) fonts[i] = LoadFont(files[i]);
    return fonts;
}

Font *LoadFontsFromImages(Image *images, Color *keys, int *firstChars, int count) {
    Font fonts[count];
    for (int i = 0; i < count; i++) fonts[i] = LoadFontFromImage(images[i], keys[i], firstChars[i]);
    return fonts;
}

Model *LoadModels(const char **files, int count) {
    Model models[count];
    for (int i = 0; i < count; i++) models[i] = LoadModel(files[i]);
    return models;
}

Model *LoadModelsFromMeshes(Mesh *meshes, int count) {
    Model m[count];
    for (int i = 0; i < count; i++) m[i] = LoadModelFromMesh(meshes[i]);
    return m;
}

Shader *LoadShaders(const char **files, int count) {
    Shader shaders[count / 2];
    for (int i = 0; i < count; i += 2) {
        if (files[i] != NULL && files[i + 1] != NULL) shaders[i] = LoadShader(files[i], files[i + 1]);
    }
    return shaders;
}

Wave *LoadWaves(const char **files, int count) {
    Wave waves[count];
    for (int i = 0; i < count; i++) waves[i] = LoadWave(files[i]);
    return waves;
}

Sound *LoadSounds(const char **files, int count) {
    Sound sounds[count];
    for (int i = 0; i < count; i++) sounds[i] = LoadSound(files[i]);
    return sounds;
}

Sound *LoadSoundsFromWaves(Wave *waves, int count) {
    Sound sounds[count];
    for (int i = 0; i < count; i++) sounds[i] = LoadSoundFromWave(waves[i]);
    return sounds;
}

Music *LoadMusics(const char **files, int count) {
    Music musics[count];
    for (int i = 0; i < count; i++) musics[i] = LoadMusicStream(files[i]);
    return musics;
}

void UnloadImages(Image *images, int count) {
    for (int i = 0; i < count; i++) UnloadImage(images[i]);
}

void UnloadTextures(Texture2D *textures, int count) {
    for (int i = 0; i < count; i++) UnloadTexture(textures[i]);
}

void UnloadRenderTextures(RenderTexture2D *targets, int count) {
    for (int i = 0; i < count; i++) UnloadRenderTexture(targets[i]);
}

void UnloadFonts(Font *fonts, int count) {
    for (int i = 0; i < count; i++) UnloadFont(fonts[i]);
}

void UnloadModels(Model *models, int count) {
    for (int i = 0; i < count; i++) UnloadModel(models[i]);
}

void UnloadMeshes(Mesh *meshes, int count) {
    for (int i = 0; i < count; i++) UnloadMesh(meshes[i]);
}

void UnloadMaterials(Material *materials, int count) {
    for (int i = 0; i < count; i++) UnloadMaterial(materials[i]);
}

void UnloadModelAnimations(ModelAnimation *animations, int count) {
    for (int i = 0; i < count; i++) UnloadModelAnimation(animations[i]);
}

void UnloadShaders(Shader *shaders, int count) {
    for (int i = 0; i < count; i++) UnloadShader(shaders[i]);
}

void UnloadWaves(Wave *waves, int count) {
    for (int i = 0; i < count; i++) UnloadWave(waves[i]);
}

void UnloadSounds(Sound *sounds, int count) {
    for (int i = 0; i < count; i++) UnloadSound(sounds[i]);
}

void UnloadMusics(Music *musics, int count) {
    for (int i = 0; i < count; i++) UnloadMusicStream(musics[i]);
}

void UpdateCameras(Camera **cameras, int count) {
    for (int i = 0; i < count; i++) UpdateCamera(&cameras[i]);
}

void UpdateMusics(Music *musics, int count) {
    for (int i = 0; i < count; i++) UpdateMusicStream(musics[i]);
}

void UpdateTextures(Texture2D *textures, const void **pixels, int count) {
    for (int i = 0; i < count; i++) UpdateTexture(textures[i], &pixels[i]);
}

void UpdateModelAnimations(Model *models, ModelAnimation *animations, int *frames, int count) {
    for (int i = 0; i < count; i++) UpdateModelAnimation(models[i], animations[i], frames[i]);
}

void UpdateSounds(Sound *sounds, const void **data, int *samplesCount, int count) {
    for (int i = 0; i < count; i++) UpdateSound(sounds[i], &data[i], samplesCount[i]);
}

void UpdateAudioStreams(AudioStream *streams, const void **data, int *samplesCount, int count) {
    for (int i = 0; i < count; i++) UpdateAudioStream(streams[i], &data[i], samplesCount[i]);
}
#endif
#endif
