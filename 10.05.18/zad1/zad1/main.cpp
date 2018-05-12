#include <iostream>
#include <vector>

using namespace std;

struct vec3 {
	float x;
	float y;
	float z;
};
 
struct vec3 operator+ (const vec3& vec, const vec3& vec1) {
	struct vec3 vec_new;
	vec_new.x = vec.x + vec1.x;
	vec_new.y = vec.y + vec1.y;
	vec_new.z = vec.z + vec1.z;
	return vec_new;
}

struct vec3 operator- (const vec3& vec, const vec3& vec1) {
	struct vec3 vec_new;
	vec_new.x = vec.x - vec1.x;
	vec_new.y = vec.y - vec1.y;
	vec_new.z = vec.z - vec1.z;
	return vec_new;
}

void operator+=(vec3& vec, const vec3& vec1) {
	vec.x += vec1.x;
	vec.y += vec1.y;
	vec.z += vec1.z;
}

void operator-=(vec3& vec, const vec3& vec1) {
	vec.x -= vec1.x;
	vec.y -= vec1.y;
	vec.z -= vec1.z;
}

struct vec3 operator* (vec3& vec, vec3& vec1) {
	struct vec3 vec_new;
	vec_new.x = vec.y*vec1.z - vec.z*vec1.y;
	vec_new.y = vec.z*vec1.x - vec.x*vec1.z;
	vec_new.z = vec.x*vec1.y - vec.y*vec1.x;
	return vec_new;
}

vec3 operator* (const vec3& v, const float i)
{
	struct vec3 vec;
	vec.x = v.x * i;
	vec.y = v.y * i;
	vec.z = v.z * i;
	return vec;
}



void operator*= (vec3& vec, vec3& vec1) {
	struct vec3 vec_new;
	vec_new.x = vec.y*vec1.z - vec.z*vec1.y;
	vec_new.y = vec.z*vec1.x - vec.x*vec1.z;
	vec_new.z = vec.x*vec1.y - vec.y*vec1.x;
}

void operator*= (vec3& vec, const float i) {
	vec.x *= i;
	vec.y *= i;
	vec.z *= i;
}

int main() {
	struct vec3 vec1 = { 3, 4, 5 };
	struct vec3 vec2 = { 1, 2, 0 };

	cout << "Suma:" << endl;
	struct vec3 vec_suma = vec1 + vec2;
	cout << vec_suma.x << " " << vec_suma.y << " " << vec_suma.z << endl;
	
	cout << "Roznica:" << endl;
	vec1 -= vec2;
	cout << vec1.x << " " << vec1.y << " " << vec1.z << endl;

	cout << "Iloczyn wektorowy:" << endl;
	struct vec3 vec_iloczyn = vec1*vec2;
	cout << vec_iloczyn.x << " " << vec_iloczyn.y << " " << vec_iloczyn.z << endl;
 
	cout << "Wektor pomnozony przez liczbe: ";
	vec1 *= 3;
	cout << vec1.x << " " << vec1.y << " " << vec1.z << endl;
	system("pause");
	return 0;
}
