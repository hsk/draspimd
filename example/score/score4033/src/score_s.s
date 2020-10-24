	.globl	scoreDrawTop
scoreDrawTop:
	link.w %fp,#0
	move.l %d2,-(%sp)
	move.l #1091436547,12582916
	move.l 8(%fp),%d0
	rol.l #8,%d0
	moveq #6,%d1
.L33:
	moveq #15,%d2
	and.l %d0,%d2
	jne .L34
	move.w #0,12582912
	rol.l #4,%d0
	dbra %d1, .L33
.L34:
	move.w %d0,%d2
	and.w #15,%d2
	move.w %d2,%a0
	lea (-23120,%a0),%a0
	move.w %a0,12582912
	rol.l #4,%d0
	dbra %d1, .L34
	move.l (%sp)+,%d2
	unlk %fp
	rts

	.globl	scoreDrawScore
scoreDrawScore:
	link.w %fp,#0
	move.l %d2,-(%sp)
	move.l #1094320131,12582916
	move.l 8(%fp),%d0
	rol.l #8,%d0
	moveq #6,%d1
.L41:
	moveq #15,%d2
	and.l %d0,%d2
	jne .L42
	move.w #0,12582912
	rol.l #4,%d0
	dbra %d1, .L41
.L42:
	move.w %d0,%d2
	and.w #15,%d2
	move.w %d2,%a0
	lea (-6736,%a0),%a0
	move.w %a0,12582912
	rol.l #4,%d0
	dbra %d1, .L42
	move.l (%sp)+,%d2
	unlk %fp
	rts
