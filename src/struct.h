#define MAX_TASK_LENGTH 8192
#define MAX_FILE_NAME 1024
#define MAX_FILENAME_SIZE 1024
#define HALO_DATA_N_COL 10
#define MAX(x,y) x>y?x:y
#define MIN(x,y) x>y?y:x
#define CL_ID 0
#define CL_NPART 1
#define CL_MASS 2
#define CL_NSUBS 3
#define CL_P_X 4  /*in h^-1 kpc*/
#define CL_P_Y 5
#define CL_P_Z 6
#define CL_V_X 7 /*in km/s*/
#define CL_V_Y 8
#define CL_V_Z 9
#define CORR_PIVOT_INDEX 1
#define CORR_PARTNER_INDEX 2
#define CORR_PARTNER2_INDEX 3
#define CORR_DATA_N_COL 3
#define USAGE "USAGE: ./correlate.x cl_pivot_file cl_file_2 output_file n_grid box_size mass_threshold"
#define BUFFER_SIZE 2000
#define PI 3.14159

