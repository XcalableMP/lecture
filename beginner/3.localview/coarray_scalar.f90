program coarray_scalar
  implicit none
  include "xmp_coarray.h"
  integer :: val[*], tmp = 0
  integer :: me

  me = this_image()
  val = me

  write(*,*) "[START] My image is", me, ", val =", val, " tmp =", tmp

  sync all

  if (this_image() == 1) then
     tmp = val[2]  ! get
     val[2] = val ! put
  end if

  sync all

  write(*,*) "[END] My image is", me, ", val =", val, " tmp =", tmp
  
end program coarray_scalar

