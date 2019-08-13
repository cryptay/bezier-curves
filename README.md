# Bezier curves printer

We have an set of points ((x<sub>1</sub>; y<sub>1</sub>), (x<sub>2</sub>; y<sub>2</sub>), etc.). It's needed to connect them with smooth line using Bezier curves.

#### Input

`bezier-curves <image_width> <image_height> <pixels_per_point> <input_file_name> <output_file_name>`

Input file has format:

x<sub>1</sub> y<sub>1</sub>

x<sub>2</sub> y<sub>2</sub>

x<sub>3</sub> y<sub>3</sub>

...

#### Output

Output file should be an bitmap (BMP) image with specified parameters and Bezier curves visualized.

#### Quality requirements

Line must be beautiful. This means that it must be thick, smooth and smooth at the edges.

The program should not fail with incorrect input.
