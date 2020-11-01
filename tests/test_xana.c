/*
** XANA project, 2020
** plongée dans le monde
** pourquoi ulrik et yumi se pécho pas?
** aelita best waifu
*/

#include <criterion/criterion.h>
#include <bistromatic.h>

char *eval_expr(char const *str);

Test(eval_expr, nombre_episode_sans_tour)
{
    cr_expect_str_eq(eval_expr("3+4*2"), "11");
}

Test(eval_expr, le_judo_c_cool_surtout_pour_pecho_des_japonaise)
{
    cr_expect_str_eq(eval_expr("3*4+2"), "14");
}

Test(eval_expr, mon_crush_d_enfant_c_le_chat_qui_tire_des_flechettes)
{
    cr_expect_str_eq(eval_expr("3-4-2"), "-3");
}

Test(eval_expr, ha_c_un_homme_pk_personne_me_la_dit)
{
    cr_expect_str_eq(eval_expr("--++-6*12"), "-72");
}

Test(eval_expr, suis_je_gay_au_fond)
{
    cr_expect_str_eq(eval_expr("6*-12"), "-72");
}

Test(eval_expr, on_ira_on_saura_sauver_notre_existence_pour_refaire_de_se_monde_un_monde_sans_danger_on_ira_on_saura_sauver_notre_existence_pour_refaiiiiiiiiiiiiiiire_un_monde_saaaans_dangeeeeeeeer)
{
    cr_expect_str_eq(eval_expr("6*12"), "72");
}

Test(eval_expr, deception)
{
    cr_expect_str_eq(eval_expr("(2+5)*2"), "14");
}

Test(eval_expr, les_filles_au_cheveux_rose_sa_aime_les_geeks)
{
    cr_expect_str_eq(eval_expr("(18+42)+5*42"), "270");
}

Test(eval_expr, le_tenebreux_il_a_une_grosse_epee)
{
    cr_expect_str_eq(eval_expr("5+(((((2+4)*8+50*(10+1))+20)-42)+3*2)"), "587");
}

Test(eval_expr, code_lyoko_evolution_aled)
{
    cr_expect_str_eq(eval_expr("(-((5+(((((2+4)*8+50*(10+1))+20)-42)+3*2))))"), "-587");
}

Test(eval_expr, marvin_more_savage_than_xana)
{
    cr_expect_str_eq(eval_expr("(91827816491287649812764219-912874698127694871264249876124)*(412098741246217864918247019287492689219047012412*(98472610462894892714628176491274692814-14712087012984702918740928131293761298376123)/18273687126387213)+1"), "302840505471185192375895180251526339706415827148180226071701791233396096402522152473050029302555762136581");
}

Test(eval_expr, marvin_more_savage_than_xana_v2)
{
    cr_expect_str_eq(eval_expr("(91827816491287649812764219-912874698127694871264249876124)*(-412098741246217864918247019287492689219047012412*-(98472610462894892714628176491274692814-14712087012984702918740928131293761298376123)/-18273687126387213)-1"),"-302840505471185192375895180251526339706415827148180226071701791233396096402522152473050029302555762136581");
}
