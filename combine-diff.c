static int filename_changed(char status)
{
	return status == 'R' || status == 'C';
}

static struct combine_diff_path *intersect_paths(
	struct combine_diff_path *curr,
	int n,
	int num_parent,
	int combined_all_paths)
	int i, j, cmp;

			if (combined_all_paths &&
			    filename_changed(p->parent[n].status)) {
				strbuf_init(&p->parent[n].path, 0);
				strbuf_addstr(&p->parent[n].path,
					      q->queue[i]->one->path);
			}
			for (j = 0; j < num_parent; j++)
				if (combined_all_paths &&
				    filename_changed(p->parent[j].status))
					strbuf_release(&p->parent[j].path);
		if (combined_all_paths &&
		    filename_changed(p->parent[n].status))
			strbuf_addstr(&p->parent[n].path,
				      q->queue[i]->one->path);
	if (rev->combined_all_paths) {
		for (i = 0; i < num_parent; i++) {
			char *path = filename_changed(elem->parent[i].status)
				? elem->parent[i].path.buf : elem->path;
			if (elem->parent[i].status == DIFF_STATUS_ADDED)
				dump_quoted_path("--- ", "", "/dev/null",
						 line_prefix, c_meta, c_reset);
			else
				dump_quoted_path("--- ", a_prefix, path,
						 line_prefix, c_meta, c_reset);
		}
	} else {
		if (added)
			dump_quoted_path("--- ", "", "/dev/null",
					 line_prefix, c_meta, c_reset);
		else
			dump_quoted_path("--- ", a_prefix, elem->path,
					 line_prefix, c_meta, c_reset);
	}
		textconv = userdiff_get_textconv(opt->repo, userdiff);
	for (i = 0; i < num_parent; i++)
		if (rev->combined_all_paths) {
			if (filename_changed(p->parent[i].status))
				write_name_quoted(p->parent[i].path.buf, stdout,
						  inter_name_termination);
			else
				write_name_quoted(p->path, stdout,
						  inter_name_termination);
		}
/*
 * Diff stat formats which we always compute solely against the first parent.
 */
#define STAT_FORMAT_MASK (DIFF_FORMAT_NUMSTAT \
			  | DIFF_FORMAT_SHORTSTAT \
			  | DIFF_FORMAT_SUMMARY \
			  | DIFF_FORMAT_DIRSTAT \
			  | DIFF_FORMAT_DIFFSTAT)
	const struct oid_array *parents,
	struct diff_options *opt,
	int combined_all_paths)
		int stat_opt = output_format & STAT_FORMAT_MASK;
		paths = intersect_paths(paths, i, num_parent,
					combined_all_paths);
		paths = find_paths_generic(oid, parents, &diffopts,
					   rev->combined_all_paths);
		stat_opt = opt->output_format & STAT_FORMAT_MASK;
		else if (opt->output_format & STAT_FORMAT_MASK)
		for (i = 0; i < num_parent; i++)
			if (rev->combined_all_paths &&
			    filename_changed(tmp->parent[i].status))
				strbuf_release(&tmp->parent[i].path);